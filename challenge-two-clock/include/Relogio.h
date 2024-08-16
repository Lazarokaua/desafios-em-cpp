#ifndef RELOGIO_H
#define RELOGIO_H

// estrutura da classe Relogio
class Relogio {
private:
    int hora;
    int min;
    int seg;


    public:
    void setHora(int hora = 0, int min = 0, int seg = 0);
    void getHora(int &hora, int &min, int &seg);
    void avancarHorario();
};

#endif