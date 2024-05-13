#include "../personagens-hpp/Naruto.hpp"

Naruto::Naruto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Naruto::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Naruto::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Naruto::pegarDescricao() 
{
    return "Esse e meu jeito ninja, dattebayo!";
}