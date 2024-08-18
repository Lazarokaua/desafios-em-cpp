#ifndef TELEVISAO_H // Diretiva de pré-processador para evitar múltiplas inclusões
#define TELEVISAO_H


class Televisao
{
public:
    int volume = 0, canal = 4;

    void aumentarVolume();
    void diminuirVolume();
    void getVolume();
    void aumentarCanal();
    void diminuirCanal();
    void trocarCanal(int channel);
    void getCanal();
};

#endif // TELEVISAO_H
