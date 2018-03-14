/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para executar aritmetica entre numeros complexos
 */

#include <iostream>

using namespace std;

class Complex
{
public:
    //construtores
    Complex(); //inicializa as duas partes em 0
    Complex(double parteReal, double parteImaginaria); //inicializa as duas partes com dados pre definidos no programa

    void setParteReal(double parteReal);
    void setParteImaginaria(double parteImaginaria);

    double getParteReal();
    double getParteImaginaria();

    void mensagemConstroiObjeto(); //mensagens para solicitar ao usuario as informacoes do numero complexo

    //funcao que retorna um objeto soma entre os numeros (objeto recebido por parametro é o objeto a qual o primeiro deve ser somado)
    Complex soma(Complex objeto);
    //funcao que retorna um objeto subtracao entre os numeros (objeto recebido por parametro é o objeto a qual o primeiro deve ser subtraido)
    Complex subtracao(Complex objeto);

    void displayNumero(); // exibe o numero complexo de maneira numeroReal + numeroImaginario * i

private:
    double parteReal, parteImaginaria;
};



