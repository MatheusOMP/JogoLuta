#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Luva.hpp"

Luva :: Luva(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Luva::gerarForcaAtaque()
{
    return maxForca;
}

string Luva::gerarRuidoAtaque()
{
    return "Pow pow pow";
}