#include <iostream>
#include "../include/Condicionador.h"

using namespace std;

int main(){

    Condicionador meuArCondicionado; // criando o objeto a partir da class Condicionador.
    Condicionador meu2ArCondicionado;

    meuArCondicionado.setTemperaturaExterna(25);
    meuArCondicionado.setPotencia(5);
    meuArCondicionado.calcularTemperaturaAmbiente();
    meuArCondicionado.mostrarTemperaturaAmbiente();

    // ========= Uso do segundo objeto abaixo =============
    meu2ArCondicionado.setTemperaturaExterna(31);
    meu2ArCondicionado.setPotencia(10);
    meu2ArCondicionado.calcularTemperaturaAmbiente();
    meu2ArCondicionado.mostrarTemperaturaAmbiente();



    return 0;
}