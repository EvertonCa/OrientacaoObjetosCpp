//program that creates a class Employee, with his name, last name and salary. Creates 2 employees, shows their anual
//salaries and then asks for the rate in which they should get a raise, showing the new salary.
#include <iostream>

using namespace std;

//create the class Employee
class Employee
{
public:
    //to create the employee name
    void setNome(string nome)
    {
        this->nome = nome;
    }

    //to create the employee last name
    void setSobrenome(string sobrenome)
    {
        this->sobrenome = sobrenome;
    }

    //to create the employee salary
    void setSalario(double salario)
    {
        if(salario < 0)
            salario = 0;

        this->salario = salario;
    }

    //to receive the employee name
    string getNomeEmployee()
    {
        return nome;
    }

    //to receive the employee last name
    string getSobrenomeEmployee()
    {
        return sobrenome;
    }

    //to receive the employee salary
    double getSalarioEmployee()
    {
        return salario;
    }

    //to create the employee new salary with the raise rate
    void setAumentoSalario(double porcentagem)
    {
        salario = salario + ((porcentagem * 0.01) * salario);
    }

    //to show the anual salary
    double exibirSalarioAnual()
    {
        return (salario * 12);
    }

private:
    string nome;
    string sobrenome;
    double salario;
};

int main()
{
    string bufferNome;
    double salario, aumento;
    Employee funcionario1, funcionario2;

    //PRIMEIRO FUNCIONARIO
    cout << "Entre com o nome do Primeiro funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario1.setNome(bufferNome);

    cout << "Entre com o sobrenome do Primeiro funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario1.setSobrenome(bufferNome);

    cout << "Entre com o salario do Primeiro funcionário:"<<endl;
    cin >> salario;
    funcionario1.setSalario(salario);
    cin.ignore(); //LIMPEZA DE BUFFER DE ENTRADA

    //EXIBIR SALARIO ANUAL DO PRIMEIRO FUNCIONARIO
    cout << "O salário anual do funcionário " << funcionario1.getNomeEmployee() << " " <<
         funcionario1.getSobrenomeEmployee() << " é R$" << funcionario1.getSalarioEmployee() << endl;

    //SEGUNDO FUNCIONÁRIO
    cout << "Entre com o nome do Segundo funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario2.setNome(bufferNome);

    cout << "Entre com o sobrenome do Segundo funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario2.setSobrenome(bufferNome);

    cout << "Entre com o salario do Segundo funcionário:"<<endl;
    cin >> salario;
    funcionario2.setSalario(salario);
    cin.ignore(); //LIMPEZA DE BUFFER DE ENTRADA

    //EXIBIR SALARIO ANUAL DO SEGUNDO FUNCIONARIO
    cout << "O salário anual do funcionário " << funcionario2.getNomeEmployee() << " " <<
         funcionario2.getSobrenomeEmployee() << " é R$" << funcionario2.getSalarioEmployee() << endl;

    //AUMENTO DO PRIMEIRO FUNCIONARIO
    cout << "Entre com a % de aumento que deseja dar para o funcionário "<< funcionario1.getNomeEmployee() << " " <<
         funcionario1.getSobrenomeEmployee() << endl;

    cin >> aumento;
    funcionario1.setAumentoSalario(aumento);

    cout << "O novo salário do funcionário "<< funcionario1.getNomeEmployee() << " " <<
         funcionario1.getSobrenomeEmployee() << " sera R%" << funcionario1.getSalarioEmployee() << " mensais e R$"
         << funcionario1.exibirSalarioAnual() << " anuais." << endl;

    //AUMENTO DO SEGUNDO FUNCIONARIO
    cout << "Entre com a % de aumento que deseja dar para o funcionário "<< funcionario2.getNomeEmployee() << " " <<
         funcionario2.getSobrenomeEmployee() << endl;

    cin >> aumento;
    funcionario2.setAumentoSalario(aumento);

    cout << "O novo salário do funcionário "<< funcionario2.getNomeEmployee() << " " <<
         funcionario2.getSobrenomeEmployee() << " sera R%" << funcionario2.getSalarioEmployee() << " mensais e R$"
         << funcionario2.exibirSalarioAnual() << " anuais." << endl;

    return 0;
}
