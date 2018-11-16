//
// Created by Lara Bellatin on 11/16/18.
//

#ifndef VERSION_1_JUGADOR_H
#define VERSION_1_JUGADOR_H
#include "Ficha.h"
#include "Definiciones.h"


class Jugador {
private:
    Ficha **pF=nullptr;
    TipoEntero numeroDeJugador;
    TipoBandera EsPersona;
    TipoCadena identificador;

public:
    Jugador(TipoBandera _EsPersona, TipoCadena _identificador, TipoEntero _numeroDeJugador){EsPersona=_EsPersona; identificador = _identificador; numeroDeJugador=_numeroDeJugador; CrearFichas();}
    //getters
    TipoCadena get_id(){return identificador;}
    TipoBandera get_EsPersona(){return EsPersona; }
    TipoEntero get_numeroDeJugador(){return numeroDeJugador;}

    //setters
    void set_id(TipoCadena _identificador){identificador=_identificador;}
    void set_EsPersona(TipoBandera _EsPersona){EsPersona=_EsPersona; }
    void set_numeroDeJugador(TipoEntero _numeroDeJugador){numeroDeJugador=_numeroDeJugador;}

    //metodos
    void CrearFichas();
};


#endif //VERSION_1_JUGADOR_H
