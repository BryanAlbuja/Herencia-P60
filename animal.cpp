#include "animal.h"



Animal::Animal(string nombre) : nombre(nombre) {}

string Animal::habla()
{
    return "Grrrr!";
}

string Animal::quienEres()
{
    return "Soy un " + this->queSoy + " y me llamo " + this->nombre;
}
