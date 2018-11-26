#include <iostream>
#include <string>
#include "Ficha.h"
#include "Jugador.h"
#include "Computadora.h"
#include "Persona.h"
#include <random>
#include <time.h>

using namespace std;
extern TipoCadena *Ludo;


int main() {

    TipoEntero mayorPosicion=15;

    srand(time(nullptr));
    Ludo=new TipoCadena[104];

    CrearTablero(Ludo);

    TipoEntero numero;
    TipoCadena id;
    Jugador *pJ1=nullptr;
    Jugador *pJ2=nullptr;
    Jugador *pJ3=nullptr;
    Jugador *pJ4=nullptr;

    do {
        cout << "Escoge la cantidad de jugadores (1-4): ";
        cin >> numero;
    }while(numero<1 || numero>4);

    switch(numero){
        case 1:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Persona(id, 1, Ludo);
            pJ2 = new Computadora("@", 2, Ludo);
            pJ3 = new Computadora("&", 3, Ludo);
            pJ4 = new Computadora("#", 4, Ludo);
            break;
        case 2:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Persona(id, 1, Ludo);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Persona(id, 2, Ludo);
            pJ3 = new Computadora("@", 3, Ludo);
            pJ4 = new Computadora("&", 4, Ludo);
            break;
        case 3:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Persona(id, 1, Ludo);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Persona(id, 2, Ludo);
            cout << "Jugador 3 ingrese su identificador: "; cin >> id;
            pJ3 = new Persona(id, 3, Ludo);
            pJ4 = new Computadora("@", 4, Ludo);
            break;
        case 4:
            cout << "Jugador 1 ingrese su identificador: "; cin >> id;
            pJ1 = new Persona(id, 1, Ludo);
            cout << "Jugador 2 ingrese su identificador: "; cin >> id;
            pJ2 = new Persona(id, 2, Ludo);
            cout << "Jugador 3 ingrese su identificador: "; cin >> id;
            pJ3 = new Persona(id, 3, Ludo);
            cout << "Jugador 4 ingrese su identificador: "; cin >> id;
            pJ4 = new Persona(id, 4, Ludo);
            break;
    }

    cout << "\nJugador 1: " << pJ1->get_id();
    cout << "\nJugador 2: " << pJ2->get_id();
    cout << "\nJugador 3: " << pJ3->get_id();
    cout << "\nJugador 4: " << pJ4->get_id();

    Display(Ludo);

    cout <<"\nJuguemos!\n";
    pJ1->Turno(Ludo);

    return 0;
}
