#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Gato : public Animal
{
public:
    Gato(string nombre);
    // Sobreescritura del método habla
    string habla();
};

#endif // GATO_H
