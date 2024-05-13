#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../core-simulador-hpp/Simulador.hpp"
#include "../core-simulador-hpp/Personagem.hpp"

using std::cout;
using std::endl;



bool Simulador::adicionarPersonagem(Personagem* personagem, int equipe)
{
    switch (equipe)
    {
        case 1:
            equipe1.push_back(personagem);
            return true;
        
        case 2:
            equipe2.push_back(personagem);
            return true;

        default:
            return false;
    }
}

bool Simulador::removerPersonagem(Personagem* personagem, vector<Personagem*> equipe)
{
    int posicoes = 0;
    for(auto p : equipe)
    {
        if(p->getId() == personagem->getId())
        {
            equipe.erase(equipe.begin()+posicoes);
            return true;
        }
        posicoes++;
    }
    return false;
}

bool Simulador::removerPersonagem(Personagem* personagem, int equipe)
{
    if (equipe == 1)
    {
        return removerPersonagem(personagem, equipe1);
    }

    if(equipe == 2)
    {
        return removerPersonagem(personagem, equipe2);
    }
    
    return false;
}

int Simulador::calcularVidaEquipe(int seletorDeEquipe)
{   
    vector<Personagem*> equipe = seletorDeEquipe == 1 ? equipe1 : equipe2;
    int soma = 0;
    for (auto personagem : equipe)
    {
        soma += personagem->getVida();
    }
    return soma;
}

Personagem* Simulador::proximoPersonagem(vector<Personagem*> equipe,int a)
{
    int tamanho = equipe.size();

    if (tamanho == 0)
    {
        return nullptr;
    }
    
    if(equipe[a]->getVida()>0) return equipe[a];
    for(int i=0;i<3;i++) if(equipe[i]->getVida()>0) return proximoPersonagem(equipe,++a);
    return nullptr;
}

int Simulador::criarCombate(Personagem* personagem1, Personagem* personagem2)
{
    int ataque = personagem1->gerarAtaque();
    int defesa = personagem2->criarDefesa();
    int dano = ataque - defesa < 0 ? 0 : ataque - defesa;
    int nova_vida = personagem2->getVida() - dano > 0 ? personagem2->getVida() - dano : 0;
    personagem2->setVida(nova_vida);
    return dano;
}

string Simulador::criarSaida(Personagem* personagem1, Personagem* personagem2, int dano)
{
    string saida = "---------------------------------------------------------\n";
    saida += "O personagem " + personagem1->getNome() + " ira atacar o " + personagem2->getNome() + "\n";
    saida += "com a sua arma " + personagem1->getArmaAtaque()->getDescricaoArma() + "\n";
    saida += "Dano causado = " + std::to_string(dano) + "\n";
    saida += dano > 0 ? personagem1->getNome() + ": " : "";
    saida += dano > 0 ? personagem1->pegarDescricao() : "";
    saida += "\nVIDA:\n" + personagem1->getNome() + " [" + std::to_string(personagem1->getVida()) + "] " + personagem2->getNome() + " [" + 
             std::to_string(personagem2->getVida()) + "]";
    saida += "\nEquipe 1 " + std::to_string(calcularVidaEquipe(1)) + " x " + 
             std::to_string(calcularVidaEquipe(2)) + " Equipe 2";
    saida += "\n---------------------------------------------------------\n";
    return saida;
}

void Simulador::iniciarSimulacao()
{
     // Define a semente baseada na hora atual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int dano = 0;
    Personagem* personagemAtacante;
    Personagem* personagemDefesa;
    int a=std::rand()%3;
    int cont=0;
    int max=equipe1.size();
    while(calcularVidaEquipe(1) > 0 && calcularVidaEquipe(2) > 0)
    {
        int equipeQueAtaca =  (cont % 2) == 0 ? 1 : 2;

        if (a==max)a=0;
        if (equipeQueAtaca == 1)
        {
            personagemAtacante = proximoPersonagem(equipe1,a);
            personagemDefesa = proximoPersonagem(equipe2,a);
        }
        if (equipeQueAtaca == 2)
        {
            personagemAtacante = proximoPersonagem(equipe2,a);
            personagemDefesa = proximoPersonagem(equipe1,a);
        }

        a++;
        cont++;
        dano = criarCombate(personagemAtacante, personagemDefesa);
        cout << criarSaida(personagemAtacante, personagemDefesa, dano) << endl;
    }
}