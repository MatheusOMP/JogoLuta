#ifndef NARUTO
#define NARUTO
#include "../core-simulador-hpp/Personagem.hpp"
class Naruto : public Personagem
{
    public:
        Naruto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif