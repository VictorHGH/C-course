// Ejercicio 1: Crear un arreglo unidimensional donde el usuario
// indique el tamaño por teclado, luego llenar el arreglo
// con números aleatorios entre 1 - 100 y por último
// mostrar los elementos del arreglo.

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int long_arreglo;
  cout << "Digite la longitud del arreglo: ";
  cin >> long_arreglo;

  int arreglo[long_arreglo];

  for (int i = 0; i < long_arreglo; i++) {
    arreglo[i] = 1 + rand() % (100);
  }

  for (int i = 0; i < long_arreglo; i++) {
    cout << i + 1 << ". " << arreglo[i] << endl;
  }

  return 0;
}
