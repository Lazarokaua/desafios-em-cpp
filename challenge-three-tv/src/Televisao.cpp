// #include "../include/Televisao.h"
#include <iostream>
#include "../include/Televisao.h"

using namespace std;

// usando a class Telivisao e definindo a logica da acao: aumentarVolume;
void Televisao::aumentarVolume()
{
    volume++;

    cout << "Volume: " << volume << endl;
}

// usando a class Telivisao e definindo a logica da acao: diminuirVolume;
void Televisao::diminuirVolume()
{
    volume--;

    cout << "Volume: " << volume << endl;
}

// usando a class Telivisao e definindo a logica da acao: pegar o volume;
void Televisao::getVolume()
{
    cout << "Volume: " << volume << endl;
}

// usando a class Telivisao e definindo a logica da acao: aumentar o canal;
void Televisao::aumentarCanal()
{
    canal++;

    cout << "CH: " << canal << endl;
}

// usando a class Telivisao e definindo a logica da acao: diminuir o canal;
void Televisao::diminuirCanal()
{
    canal--;

    cout << "CH: " << canal << endl;
}

// usando a class Telivisao e definindo a logica da acao: trocar o canal;
void Televisao::trocarCanal(int channel)
{
    this->canal = channel;

    cout << "CH: " << canal << endl;
}


// usando a class Telivisao e definindo a logica da acao: pegar o canal;
void Televisao::getCanal()
{
    cout << "CH: " << canal << endl;
}
