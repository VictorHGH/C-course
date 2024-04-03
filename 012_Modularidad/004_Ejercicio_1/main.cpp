// Ejercicio 1: Diseñar un algoritmo que pida un nombre al usuario y que 
// espliegue en pantalla el nombre entre asteriscos. La cantidad de asteriscos
// debe ser la misma que caracteres en el nombre incluido espacios.

#include <iostream>
#include <string>
using namespace std;

void pedirDatos(string &nombre) {
  cout << "Digíte su nombre: ";
  getline(cin, nombre);
}

void nombreEntreAsteriscos(string nombre) {
  string asteriscos = "";

  for (int i = 0; i < nombre.length(); i++) {
    asteriscos += '*';
  }

  cout << asteriscos << endl;
  cout << nombre << endl;
  cout << asteriscos << endl;
}

int main() {
  string nombre;

  pedirDatos(nombre);

  nombreEntreAsteriscos(nombre);

  return 0;
}
