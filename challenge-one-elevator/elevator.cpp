#include <iostream>

// total floor started in 1
using namespace std;

#include <iostream>

class Elevador
{
public:
    int andarAtual, totalAndar, capacidadeTotal, pessoasDentroDoElevador;
    const int terreo = 0; // comeca no terreo

    // getters
    int getAndarAtual() const
    {
        return andarAtual;
    }
    int getTotalAndar() const
    {
        return totalAndar;
    }
    int getCapacidadeTotal() const
    {
        return capacidadeTotal;
    }
    int getPessoasDentroDoElevador() const
    {
        return pessoasDentroDoElevador;
    }

    void Inicializa(int capacidadeElevador, int totalAndares)
    {
        totalAndar = terreo + totalAndares;
        capacidadeTotal = capacidadeElevador;

        andarAtual = 0;
        pessoasDentroDoElevador = 0;
        cout << "ola seja bem-vindo voce esta no andar: " << andarAtual << endl;
    }

    void Entra(int pessoasParaEntrar)
    {
        int soma = pessoasDentroDoElevador + pessoasParaEntrar;

        if (pessoasParaEntrar > getCapacidadeTotal() || soma > getCapacidadeTotal())
        { // verificando se as pessoas exedem na capacidade do elevador ou Se a soma dos que entram com os dentro vai exeder a capacidade maxima permitida
            cout << "Descupe, mas no elevador nao cabe mais de " << getCapacidadeTotal() << " pessoas" << endl;
        }
        else
        {
            pessoasDentroDoElevador = soma;
            cout << "Pessoas Dentro do Elevador: " << pessoasDentroDoElevador << endl;
        }
    }

    void Sai(int pessoasParaSair)
    {
        if (getPessoasDentroDoElevador() <= 0)
        {
            cout << "Desculpe, mas nao tem pessoas dentro do Elevador" << endl;
        }
        else if (pessoasParaSair > getPessoasDentroDoElevador())
        {
            cout << "Desculpe, mas nao podem sair mais pessoas do que as que estão dentro do elevador." << endl;
        }
        else
        {
            int saindo = getPessoasDentroDoElevador() - pessoasParaSair;
            pessoasDentroDoElevador = saindo;
            cout << "Pessoas Dentro do Elevador: " << getPessoasDentroDoElevador() << endl;
        }
    }

    void Subir(int subirParaQualAndar)
    {
        int ultimoAndar = getTotalAndar();

        if (subirParaQualAndar > ultimoAndar)
        {
            cout << "desculpe mais voce nao pode subir mais que " << ultimoAndar << " andares" << endl;
        }
        else if (subirParaQualAndar < andarAtual)
        {
            cout << "Para descer, utilize o método Descer()." << endl;
        }
        else
        {
            while (andarAtual < subirParaQualAndar)
            {
                andarAtual++;
                cout << "Subindo... Andar atual: " << andarAtual << endl;
            }

            cout << "Chegou ao andar " << andarAtual << "." << endl;
        }
    }

    void Descer(int descerParaQualAndar)
    {


        if (descerParaQualAndar < terreo)
        {
            cout << "Desculpe, mas voce nao pode descer mais que o terreo." << endl;
        }
        else if (descerParaQualAndar > andarAtual)
        {
            cout << "Para subir, utilize o método Subir()." << endl;
        }
        else 
        {
            while (andarAtual > descerParaQualAndar)
            {
                andarAtual--;
                cout << "Descendo... Andar atual: " << andarAtual << endl;
            }

            cout << "Chegou ao andar " << andarAtual << "." << endl;
        }
    }
};

int main()
{
    Elevador elevador; // criando um objeto com a class Elevador
    elevador.Inicializa(10, 8);
    elevador.Entra(8);
    elevador.Sai(5);
    elevador.Subir(8);
    elevador.Descer(2);

    return 0;
}