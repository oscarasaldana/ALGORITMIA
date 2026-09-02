#include <iostream>

#include "biblioteca/funciones.h"

using namespace std;

int main() {

    int mina[fila][columna] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Piedras
    mina[5][5] = -1;
    mina[4][5] = -1;
    mina[3][5] = -1;

    mostrarMina(mina);
    recursion(mina,1,5,0);
    cout << endl;
    mostrarCaminos(mina);

}
