// Arreglos en C++

#include <iostream>
using namespace std;

int main() {
  int numeros[5];

  // Llenado manual de arreglo:
  numeros[0] = 3;
  numeros[1] = 6;
  numeros[2] = 10;
  numeros[3] = 16;
  numeros[4] = 11;

  // Mostrar los elementos:
  for (int i = 0; i < 5; i++) {
    cout << numeros[i] << endl;
  }

  // Llenado por bucle:
  for (int i = 0; i < 5; i++) {
    cout << "Digite un número: ";
    cin >> numeros[i];
  }

  // Mostrar los nuevos elementos:
  for (int i = 0; i < 5; i++) {
    cout << numeros[i] << endl;
  }

  return 0;
}
