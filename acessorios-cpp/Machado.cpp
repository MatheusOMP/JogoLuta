#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Machado.hpp"

Machado :: Machado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Machado::gerarForcaAtaque()
{
    return maxForca;
}

string Machado::gerarRuidoAtaque()
{
    return "Chop chop chop";
}