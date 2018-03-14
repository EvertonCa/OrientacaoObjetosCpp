/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para demonstrar um Invoice de uma loja.
 */

#include <iostream>

using namespace std;

class Invoice
{
public:
    Invoice();

    string getIdentificador();
    string getDescricao();
    int getQuant();
    int getPreco();

    void setIdentificador(string identificador);
    void setDescricao(string descricao);
    void setQuant(int quant);
    void setPreco(int preco);

    int getInvoiceAmount();

    void mensagemIdentificador();
    void mensagemDescricao();
    void mensagemQuant();
    void mensagemPreco();

private:
    string identificador, descricao;
    int quant, preco;

};



