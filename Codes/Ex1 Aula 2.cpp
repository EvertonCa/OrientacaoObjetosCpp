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
        nomeEmployee = nome;
    }

    //to create the employee last name
    void setSobrenome(string sobrenome)
    {
        sobrenomeEmployee = sobrenome;
    }

    //to create the employee salary
    void setSalario(double salario)
    {
        if(salario < 0)
            salario = 0;

        salarioEmployee = salario;
    }

    //to create the employee new salary with the raise rate
    void setAumentoSalario(double porcentagem)
    {
        salarioEmployee = salarioEmployee * (1 +(0.01 * porcentagem));
    }

    //to receive the employee name
    string getNomeEmployee()
    {
        return nomeEmployee;
    }

    //to receive the employee last name
    string getSobrenomeEmployee()
    {
        return sobrenomeEmployee;
    }

    //to receive the employee salary
    double getSalarioEmployee()
    {
        return salarioEmployee;
    }

    //to show the anual salary
    void exibirSalarioAnual()
    {
        double salarioAnual;

        salarioAnual = getSalarioEmployee() * 12;

        cout << "O salário anual do funcionário "<< getNomeEmployee() << " " << getSobrenomeEmployee() << " é R$" << salarioAnual<<endl;
    }

private:
    string nomeEmployee;
    string sobrenomeEmployee;
    double salarioEmployee;
};

int main()
{
    string bufferNome;
    double salario, aumento;
    Employee funcionario1, funcionario2;

    cout << "Entre com o nome do Primeiro funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario1.setNome(bufferNome);

    cout << "Entre com o sobrenome do Primeiro funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario1.setSobrenome(bufferNome);

    cout << "Entre com o salario do Primeiro funcionário:"<<endl;
    cin >> salario;
    funcionario1.setSalario(salario);
    cin.ignore();

    cout << "Entre com o nome do Segundo funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario2.setNome(bufferNome);

    cout << "Entre com o sobrenome do Segundo funcionário:"<<endl;
    getline(cin, bufferNome);
    funcionario2.setSobrenome(bufferNome);

    cout << "Entre com o salario do Segundo funcionário:"<<endl;
    cin >> salario;
    funcionario2.setSalario(salario);
    cin.ignore();

    cout << "------ Funcionário 1 ------"<<endl;
    funcionario1.exibirSalarioAnual();

    cout << "------ Funcionário 2 ------"<<endl;
    funcionario2.exibirSalarioAnual();

    cout << "Entre com o aumento em % que deseja para o funcionário 1:"<<endl;
    cin >> aumento;
    funcionario1.setAumentoSalario(aumento);
    funcionario1.exibirSalarioAnual();

    cout << "Entre com o aumento em % que deseja para o funcionário 2:"<<endl;
    cin >> aumento;
    funcionario2.setAumentoSalario(aumento);
    funcionario2.exibirSalarioAnual();

    return 0;
}