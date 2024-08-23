// Clases y objetos en c++

#include <iostream>
#include <string>
using namespace std;

class Persona {

public:
  string nombre;
  int edad;

  Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
  }

  void mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
  }
};

int main() {
  Persona p1("Juan", 25);
  p1.mostrarDatos();
  return 0;
}
