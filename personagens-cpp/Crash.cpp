#include "../personagens-hpp/Crash.hpp"

Crash::Crash(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Crash::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Crash::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Crash::pegarDescricao() 
{
    return "Woaaaaaaah!!!!";
}