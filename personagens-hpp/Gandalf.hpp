#ifndef GANDALF
#define GANDALF
#include "../core-simulador-hpp/Personagem.hpp"
class Gandalf : public Personagem
{
    public:
        Gandalf(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif