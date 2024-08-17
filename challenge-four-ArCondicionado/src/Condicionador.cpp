#include <iostream>
#include "../include/Condicionador.h"

using namespace std;

double Condicionador::calcularTemperaturaAmbiente()
{
    double temperaturaAmbiente = temperaturaExterna - (potencia * 1.8);
    if (temperaturaAmbiente < 0.0)
    {
        temperaturaAmbiente = 0;
    }
    else if (temperaturaAmbiente > 18.0)
    {
        temperaturaAmbiente = 18.0;
    }

    mostrarTemperatura = temperaturaAmbiente;
    return temperaturaAmbiente;
}

void Condicionador::setPotencia(int novaPotencia)
{
    if (novaPotencia >= 0 && novaPotencia <= 10)
    { // entre usa o operador logico &&
        potencia = novaPotencia;
        cout << "Voce definiu com sucesso sua potencia: " << potencia << endl;
    }
    else
    {
        cout << "Potencia invalida. A potencia precisa estar entre 0 e 10." << endl;
    }
}

int Condicionador::getPotencia()
{
    return potencia;
}

void Condicionador::setTemperaturaExterna(double novaTemperaturaExterna)
{
    temperaturaExterna = novaTemperaturaExterna;
    cout << "Temperatura externa e de: " << temperaturaExterna << endl;
}

double Condicionador::getTemperaturaExterna()
{
    return temperaturaExterna;
}

void Condicionador::mostrarTemperaturaAmbiente()
{
    cout << "sua temperatura ambiente: " << mostrarTemperatura << endl;
}