#ifndef ARMADEFOGO
#define ARMADEFOGO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class ArmaDeFogo : public ArmaAtaque
{
    public:
        ArmaDeFogo(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif