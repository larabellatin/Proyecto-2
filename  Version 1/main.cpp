#include <iostream>
#include <string>
#include "Definiciones.h"
#include "Ficha.h"
#include "Jugador.h"

using namespace std;


int main() {
    TipoEntero numero;
    TipoCadena id;
    Jugador *pJ1, *pJ2, *pJ3, *pJ4;

    do {
        cout << "Escoge la cantidad de jugadores (1-4): ";
        cin >> numero;
    }while(numero<1 || numero>4);

    switch(numero){
        case 1:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Jugador(true, id, 1);
            pJ2 = new Jugador(false, "COM1", 2);
            pJ3 = new Jugador(false, "COM2", 3);
            pJ4 = new Jugador(false, "COM3", 4);
            break;
        case 2:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Jugador(true, id, 1);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Jugador(true, id, 2);
            pJ3 = new Jugador(false, "COM1", 3);
            pJ4 = new Jugador(false, "COM2", 4);
            break;
        case 3:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Jugador(true, id, 1);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Jugador(true, id, 2);
            cout << "Jugador 3 ingrese su identificador: "; cin >> id;
            pJ3 = new Jugador(true, id, 3);
            pJ4 = new Jugador(false, "COM1", 4);
            break;
        case 4:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Jugador(true, id, 1);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Jugador(true, id, 2);
            cout << "Jugador 3 ingrese su identificador: "; cin >> id;
            pJ3 = new Jugador(true, id, 3);
            cout << "Jugador 4 ingrese su identificador: "; cin >> id;
            pJ4 = new Jugador(true, id, 4);
            break;
    }

    cout << "Jugador 1: " << pJ1->get_id();
    cout << "\nJugador 2: " << pJ2->get_id();
    cout << "\nJugador 3: " << pJ3->get_id();
    cout << "\nJugador 4: " << pJ4->get_id();



    return 0;
}