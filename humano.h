#ifndef HUMANO_H
#define HUMANO_H
#include "animal.h"

class Humano : public Animal
{
public:
    Humano(string nombre);
    // Sobreescritura del método habla
    string habla();
};

#endif // HUMANO_H
