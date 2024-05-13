#include "../personagens-hpp/Poo.hpp"

Poo::Poo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Poo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Poo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Poo::pegarDescricao() 
{
    return "Nao gosto disso. Estava apenas procurando meu pote de mel.";
}