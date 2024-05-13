#ifndef CRASH
#define CRASH
#include "../core-simulador-hpp/Personagem.hpp"
class Crash : public Personagem
{
    public:
        Crash(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif