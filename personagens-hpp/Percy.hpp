#ifndef PERCY
#define PERCY
#include "../core-simulador-hpp/Personagem.hpp"
class Percy : public Personagem
{
    public:
        Percy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif