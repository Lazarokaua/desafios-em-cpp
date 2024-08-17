#ifndef CONDICIONADOR_H
#define CONDICIONADOR_H

class Condicionador {
private:
    int potencia;
    double temperaturaExterna;
    double mostrarTemperatura;

public:
    double calcularTemperaturaAmbiente();

    // Setter para a potência, entre 0-10.
    void setPotencia(int novaPotencia);
    // Getter para a potência.
    int getPotencia();

    // Setter para a temperatura externa.
    void setTemperaturaExterna(double novaTemperaturaExterna);

    // Getter para a temperatura externa.
    double getTemperaturaExterna();

    void mostrarTemperaturaAmbiente();
};

#endif