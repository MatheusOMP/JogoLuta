#ifndef LUVA
#define LUVA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Luva : public ArmaAtaque
{
    public:
        Luva(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif