#include <iostream>

#include "funciones.h"

using namespace std;

void mostrarMina(int (*mina)[columna]) {

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (mina[i][j] == 0) cout << " . ";
            else cout << " * ";
        }
        cout << endl;
    }

}

bool recursion(int (*mina)[columna], int numCamino, int posFila, int posColumna) {

    if (posFila >= fila or posFila < 0 or posColumna >= columna or posColumna <0 or
        mina[posFila][posColumna] != 0) return false;

    mina[posFila][posColumna] = numCamino;
    if (posColumna == columna - 1) {
        if (posFila == fila - numCamino) {
            recursion(mina,numCamino + 1,posFila - 1,0);
            return true;
        }
        mina[posFila][posColumna] = 0;
        return false;
    }

    if (recursion(mina,numCamino,posFila + 1,posColumna)) return true;
    if (recursion(mina,numCamino,posFila,posColumna + 1)) return true;
    if (recursion(mina,numCamino,posFila - 1,posColumna)) return true;

    mina[posFila][posColumna] = 0;
    return false;

}

void mostrarCaminos(int (*mina)[columna]) {

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (mina[i][j] == 0) cout << " . ";
            else if (mina[i][j] != 0 and mina[i][j] != - 1) cout << " " << mina[i][j] << " ";
            else cout << " * ";
        }
        cout << endl;
    }

}
