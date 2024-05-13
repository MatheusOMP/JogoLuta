#ifndef POO
#define POO
#include "../core-simulador-hpp/Personagem.hpp"
class Poo : public Personagem
{
    public:
        Poo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif