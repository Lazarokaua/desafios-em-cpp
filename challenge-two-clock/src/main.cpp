#include "../include/Relogio.h"
#include <iostream>

using namespace std;

// fazer a execucao do codigo por partes pelo showCode!

int main()
{
    Relogio meuRelogio;

    // Define um horário usando o método setHora
    meuRelogio.setHora(23, 59,55);

    // Declara variáveis para receber os valores da hora, minuto e segundo
    int hora, minuto, segundo;

    // Chama o método getHora para obter os valores
    meuRelogio.getHora(hora, minuto, segundo);

    // Imprime os valores recebidos
    // cout << "Hora: " << hora << endl;
    // cout << "Minuto: " << minuto << endl;
    // cout << "Segundo: " << segundo << endl;

    for (int i = 0; i < 10; i++)
    {
        meuRelogio.avancarHorario();
        meuRelogio.getHora(hora, minuto, segundo);
        cout << "Horario atualizado: " << hora << ":" << minuto << ":" << segundo << endl;
    }

    return 0;
}
