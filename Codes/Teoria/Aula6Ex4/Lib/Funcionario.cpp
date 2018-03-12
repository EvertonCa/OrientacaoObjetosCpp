//
// Created by Everton Cardoso on 10/03/2018.
//

#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario() {};
Funcionario::Funcionario(string nome, int idade, string sexo, int numero) : nome(nome), idade(idade), sexo(sexo), numero(numero){};

string Funcionario::getNome()
{
    return nome;
}

string Funcionario::getSexo()
{
    return sexo;
}

int Funcionario::getIdade()
{
    return idade;
}

int Funcionario::getNumero()
{
    return numero;
}
