#include "../personagens-hpp/Gandalf.hpp"

Gandalf::Gandalf(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Gandalf::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Gandalf::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Gandalf::pegarDescricao() 
{
    return "Voces nao passaram!";
}