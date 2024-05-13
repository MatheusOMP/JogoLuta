#ifndef FACA
#define FACA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Faca: public ArmaAtaque
{
    public:
        Faca(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif