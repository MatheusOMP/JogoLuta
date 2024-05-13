#include "../personagens-hpp/Percy.hpp"

Percy::Percy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Percy::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Percy::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Percy::pegarDescricao() 
{
    return "Vamos pegasus!";
}