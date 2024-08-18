#include <iostream>
#include "../include/Carro.h"

using namespace std;

int main()
{
    Carro meuCarro;
    Carro meuCarro2;

    meuCarro.abastecer(20);
    meuCarro.mover(200);

    meuCarro2.abastecer(30);
    meuCarro2.mover(400);

    cout << "Carro 1:" << endl;
    cout << "Distancia percorrida: " << meuCarro.getDistanciaPercorrida() << " KM" << endl;
    cout << "Combustivel restante: " << meuCarro.getCombustivel() << " Litros" << endl;

    cout << "\nCarro 2:" << endl;
    cout << "Distancia percorrida: " << meuCarro2.getDistanciaPercorrida() << " KM" << endl;
    cout << "Combustivel restante: " << meuCarro2.getCombustivel() << " Litros" << endl;

    return 0;
}