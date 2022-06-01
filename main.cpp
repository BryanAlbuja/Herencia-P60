#include <iostream>
#include "gato.h"
#include "animal.h"
#include "humano.h"
#include "perro.h"

using namespace std;

int main()
{
    // crear un vector de punteros de tipo Animal.
    Animal *farm[3];
    // Instancias dinámicas de objetos
    farm[0] = new Perro("Tarzan");
    farm[1] = new Gato("Chispas");
    farm[2] = new Humano("Juan Carlos");
    // recorrer el vector de objetos
    for (int i = 0; i < 3; i++)
    {
        // invocación al metodo definido en clase base
        cout << farm[i]->quienEres() << ": ";
        // llamada al metodo polimorfico
        cout<< farm[i]->habla() << endl;
    }
}
