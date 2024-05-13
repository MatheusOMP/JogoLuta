#include <iostream>
#include <string>

#include "acessorios-hpp/Rosa.hpp"
#include "acessorios-hpp/Luva.hpp"
#include "acessorios-hpp/Capa.hpp"
#include "acessorios-hpp/Faca.hpp"
#include "acessorios-hpp/Machado.hpp"
#include "acessorios-hpp/ArmaDeFogo.hpp"
#include "acessorios-hpp/Colher.hpp"
#include "acessorios-hpp/Escudo.hpp"

#include "personagens-hpp/Chaves.hpp"
#include "personagens-hpp/Poo.hpp"
#include "personagens-hpp/Percy.hpp"
#include "personagens-hpp/Naruto.hpp"
#include "personagens-hpp/Gandalf.hpp"
#include "personagens-hpp/Crash.hpp"

#include "core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new ArmaDeFogo("Ak47",20,60);
    ArmaAtaque* arma2  = new Faca("Tramontina",10,45);
    ArmaAtaque* arma3  = new Luva("Soco ingles",5,35);
    ArmaAtaque* arma4  = new Machado("StormBreaker",15,40);
    ArmaAtaque* arma5  = new Rosa("Super Rosa Amarela",25,30);
    ArmaAtaque* arma6 = new Colher("Colher de Pata",10,50);

    ArmaDefesa* escudo = new Escudo("Latão", 3);
    ArmaDefesa* escudo2 = new Capa("Capuz vermelho", 5);
    
    Personagem* p1 = new Chaves(1, "Chapolin", 10, arma4, escudo2);
    Personagem* p2 = new Crash(1, "Crash", 10, arma3, escudo);
    Personagem* p3 = new Gandalf(1, "Gandalf", 10, arma, escudo);
    Personagem* p4 = new Naruto(2, "Naruto", 10, arma2, escudo2);
    Personagem* p5 = new Percy(2, "Percy", 9, arma5, escudo);
    Personagem* p6 = new Poo(2, "Poo", 4, arma6, escudo2);


    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);    

    simulador->iniciarSimulacao();

    return 0;
}