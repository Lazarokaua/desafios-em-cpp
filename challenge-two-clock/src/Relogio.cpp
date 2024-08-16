#include "../include/Relogio.h"
#include <iostream>

using namespace std;

void Relogio::setHora(int hora, int minutos, int segundos)
{
    bool horarioValido = false;

    do
    {

        // cout << "Digite a Hora: " << endl;
        // cin >> hora;

        // cout << "Digite o Minuto: " << endl;
        // cin >> minutos;

        // cout << "Digite o Segundo: " << endl;
        // cin >> segundos;

        if (hora >= 0 && hora <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59)
        {
            this->hora = hora;
            this->min = minutos;
            this->seg = segundos;
            cout << "Horario definido com sucesso: " << hora << ":" << minutos << ":" << segundos << endl;
            horarioValido = true; // Define como true apenas quando o horário for válido
        }
        else
        {
            // Exibe mensagens de erro específicas para cada caso
            if (hora < 0 || hora > 23)
            {
                cout << "Hora invalida, voce precisa adicionar a hora no formato entre (0 - 23)" << endl;
            }
            if (minutos < 0 || minutos > 59)
            {
                cout << "Minuto invalido, voce precisa adicionar o Minuto no formato entre (0 - 59)" << endl;
            }
            if (segundos < 0 || segundos > 59)
            {
                cout << "Segundos invalidos, voce precisa adicionar os Segundos no formato entre (0 - 59)" << endl;
            }
        }
    } while (!horarioValido);
}
void Relogio::getHora(int &hora, int &min, int &seg)
{
    hora = this->hora;
    min = this->min;
    seg = this->seg;

    cout << "Horario " << hora << ":" << min << ":" << seg << endl;
};

void Relogio::avancarHorario()
{

    this->seg++;

    if (this->seg == 60)
    {
        this->seg = 0;
        this->min++;
    }

     if (this->min == 60)
    {
        this->min = 0;
        this->hora++;
    }
    
     if (this->hora == 24)
    {
        this->hora = 0;
    }

     cout << "Horario " << hora << ":" << min << ":" << seg << endl;
};
