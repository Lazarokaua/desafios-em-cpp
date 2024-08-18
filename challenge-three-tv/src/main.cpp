#include "../include/Televisao.h"
#include <iostream>

using namespace std;

int main()
{

    Televisao minhaTv;

    minhaTv.aumentarCanal();
    minhaTv.aumentarVolume();
    minhaTv.diminuirCanal();
    minhaTv.diminuirVolume();
    minhaTv.getCanal();
    minhaTv.getVolume();
    minhaTv.trocarCanal(11);

    return 0;
}