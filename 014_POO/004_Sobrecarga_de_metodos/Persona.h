#include <iostream>

using namespace std;

class Persona {
  // Atributos
private:
  string nombre;
  int edad;
  string dni;

  // Métodos
public:
  Persona(string nombre, int edad) { // Constructor
    this->nombre = nombre;
    this->edad = edad;
  }

  Persona(string dni) { this->dni = dni; }

  void correr();
  void correr(int km);
};
