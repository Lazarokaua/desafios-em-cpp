#include "../include/Carro.h"
#include <iostream>

using namespace std;

void Carro::abastecer(float quantidade)
{
    if (quantidade > 50.0)
    {
        tanque = 50;
        cout << "Quantidade Maxima alcancada. Tanque de: " << tanque << " Litros " << endl;
    }
    else if (quantidade < 0)
    {
        cout << "Nao e possivel colocar menos que 0 Litros de combustivel!" << endl;
    }
    else
    {
        tanque = quantidade;
        cout << "Combustivel adicionado: " << tanque << endl;
    }
};

void Carro::mover(float distancia)
{
    float consumo = distancia / 15;

    if (tanque >= consumo)
    {
        tanque -= consumo;
        distanciaPercorrida += distancia;
        cout << "Voce moveu seu carro com Sucesso!" << endl;
    }
    else
    {
        cout << "voce nao tem combustivel suficiente para essa distancia" << endl;
    }
}

float Carro::getCombustivel()
{
    return tanque;
}

float Carro::getDistanciaPercorrida()
{
    return distanciaPercorrida;
}