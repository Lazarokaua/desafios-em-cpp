#ifndef CARRO_H
#define CARRO_H

class Carro
{
private:

    float tanque;

public:

    float distanciaPercorrida;
    void abastecer(float quantidade);
    void mover(float distancia);
    float getCombustivel();
    float getDistanciaPercorrida();
};

#endif