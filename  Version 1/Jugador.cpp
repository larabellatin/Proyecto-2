//
// Created by Lara Bellatin on 11/16/18.
//

#include "Jugador.h"

void Jugador::CrearFichas(){
    TipoCadena nombre;
    TipoEntero pos;
    pF = new Ficha *[4];
    for(TipoEntero i=0; i<4; i++){
        nombre = identificador + '-' + (TipoCadena)(i+1);
        pos = ((numeroDeJugador-1)*4) + i;
        pF[i]->set_nombre(nombre);
        pF[i]->set_posicion[pos];
    }
}

