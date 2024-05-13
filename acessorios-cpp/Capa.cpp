#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Capa.hpp"

Capa::Capa(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Capa::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Capa::getResistencia() 
{
    return this->resistencia;
}