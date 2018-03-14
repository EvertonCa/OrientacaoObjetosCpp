/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para demonstrar um Invoice de uma loja.
 */

#include "Invoice.h"

Invoice::Invoice() //construtor
{
    mensagemIdentificador();
    mensagemDescricao();
    mensagemQuant();
    mensagemPreco();
};

string Invoice::getIdentificador()
{
    return identificador;
}

string Invoice::getDescricao()
{
    return descricao;
}

int Invoice::getQuant()
{
    return quant;
}

int Invoice::getPreco()
{
    return preco;
}

void Invoice::setIdentificador(string identificador)
{
    this->identificador=identificador;
}

void Invoice::setDescricao(string descricao)
{
    this->descricao=descricao;
}

void Invoice::setQuant(int quant) //set da quantidade, aplicando 0 caso o valor seja negativo
{
    if(quant < 0)
        quant = 0;

    this->quant=quant;
}

void Invoice::setPreco(int preco) //set do preco, aplicando 0 caso o valor seja negativo
{
    if(preco < 0)
        preco = 0;

    this->preco=preco;
}

int Invoice::getInvoiceAmount()
{
    return quant*preco;
}

void Invoice::mensagemIdentificador() //mensagem que solicita a informacao do usuario, para preencher o objeto
{
    string identificador;
    cout << "Numero Identificador: ";
    cin >> identificador;
    setIdentificador(identificador);
}

void Invoice::mensagemDescricao() //mensagem que solicita a informacao do usuario, para preencher o objeto
{
    string descricao;
    cout << "Descricao: ";
    cin.ignore();
    getline(cin, descricao);
    setDescricao(descricao);
}

void Invoice::mensagemQuant() //mensagem que solicita a informacao do usuario, para preencher o objeto
{
    int quant;
    cout << "Quantidade do produto: ";
    cin >> quant;
    setQuant(quant);
}

void Invoice::mensagemPreco() //mensagem que solicita a informacao do usuario, para preencher o objeto
{
    int preco;
    cout << "Preco do produto: ";
    cin >> preco;
    setPreco(preco);
}