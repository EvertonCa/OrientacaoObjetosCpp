/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para demonstrar um Invoice de uma loja.
 */
#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice pedido; //criacao do objeto (solicita os dados ao usuario ao ser criado)

    //exibe todos os dados entrados
    cout << "|--------------------------------------------------|" << endl;
    cout << "| Seu pedido cadastrado foi:                       " << endl;
    cout << "| ID: " << pedido.getIdentificador() << endl << "| Descricao: " << pedido.getDescricao() << endl
         << "| Quantidade: " << pedido.getQuant() << endl << "| Valor unitário: R$" << pedido.getPreco() << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << endl;
    //exibe o valor total do pedido
    cout << "|--------------------------------------------------|" << endl;
    cout << "| O valor total do pedido é de: R$" << pedido.getInvoiceAmount() << endl;
    cout << "|--------------------------------------------------|" << endl;

    return 0;
}