/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para executar aritmetica entre numeros complexos
 */

#include "Complex.h"

using namespace std;

//construtores
Complex::Complex():parteReal(0), parteImaginaria(0){}; //inicializa as duas partes em 0
Complex::Complex(double parteReal, double parteImaginaria) //inicializa as duas partes com dados pre definidos no programa
{
    setParteReal(parteReal);
    setParteImaginaria(parteImaginaria);
};

//sets
void Complex::setParteReal(double parteReal)
{
    this->parteReal = parteReal;
}

void Complex::setParteImaginaria(double parteImaginaria)
{
    this->parteImaginaria = parteImaginaria;
}

//gets
double Complex::getParteReal()
{
    return parteReal;
}

double Complex::getParteImaginaria()
{
    return  parteImaginaria;
}

//mensagens para solicitar ao usuario as informacoes do numero complexo
void Complex::mensagemConstroiObjeto()
{
    double buffer; //cria variavel temporaria

    //contrucao da parte real
    cout << "Entre com a parte REAL do numero complexo: ";
    cin >> buffer;
    setParteReal(buffer); //cria a parte real do objeto

    //contrucao da parte imaginaria
    cout << "Entre com a parte IMAGINARIA do numero complexo: ";
    cin >> buffer;
    setParteImaginaria(buffer); //cria a parte imaginaria no objeto
}

//funcao que retorna um objeto soma entre os numeros (objeto recebido por parametro é o objeto a qual o primeiro deve ser somado)
Complex Complex::soma(Complex objeto)
{
    double bufferReal, bufferImaginario;

    bufferReal = getParteReal() + objeto.getParteReal();
    bufferImaginario = getParteImaginaria() + objeto.getParteImaginaria();
    Complex somaObjetos(bufferReal, bufferImaginario);

    return somaObjetos;
}

//funcao que retorna um objeto subtracao entre os numeros (objeto recebido por parametro é o objeto a qual o primeiro deve ser subtraido)
Complex Complex::subtracao(Complex objeto)
{
    double bufferReal, bufferImaginario;

    bufferReal = getParteReal() - objeto.getParteReal();
    bufferImaginario = getParteImaginaria() - objeto.getParteImaginaria();
    Complex subtracaoObjetos(bufferReal, bufferImaginario);

    return subtracaoObjetos;
}

void Complex::displayNumero() // exibe o numero complexo de maneira numeroReal + numeroImaginario * i
{
    cout << getParteReal() << " + " << getParteImaginaria() << "i" << endl;
}
