#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
        private:
            string nombre;

        protected:
            string queSoy;

        public:
            Animal() : nombre("sin nombre") {}
            Animal(string nombre);
            // Método virtual polimorfico
            virtual string habla();


            string quienEres();


        };

#endif // ANIMAL_H
