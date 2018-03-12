//
// Created by Everton Cardoso on 10/03/2018.
//

#ifndef TESTES_FUNCIONARIO_H
#define TESTES_FUNCIONARIO_H

#include <iostream>

using namespace std;

class Funcionario
{
public:
    Funcionario();
    Funcionario(string nome, int idade, string sexo, int numero);

    string getNome();

    string getSexo();

    int getIdade();

    int getNumero();

private:
    string nome, sexo;
    int idade, numero;
};


#endif //TESTES_FUNCIONARIO_H
