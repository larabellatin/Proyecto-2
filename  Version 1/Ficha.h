//
// Created by Lara Bellatin on 11/16/18.
//

#ifndef VERSION_1_FICHA_H
#define VERSION_1_FICHA_H
#include "Definiciones.h"


class Ficha {
private:
    TipoCadena nombre;
    TipoEntero posicion;

public:
    //getters
    TipoCadena get_nombre() {return nombre;}
    TipoEntero get_posicion() {return posicion;}

    //setters
    void set_nombre(TipoCadena _nombre) {nombre=_nombre;}
    void set_posicion(TipoEntero _posicion) {posicion = _posicion;}

    //metodos

};


#endif //VERSION_1_FICHA_H
