#include <iostream>
using namespace std;

int main() {
  int numeros[] = {10, 23, 2, 40, 20, 12, 11};
  bool encontrado = false;
  int dato, posicion, i = 0;

  cout << "Digite el dato a buscar: ";
  cin >> dato;

  while (i < 7 && encontrado == false) {
    if (numeros[i] == dato) {
      encontrado = true;
      posicion = i;
    }
    i++;
  }

  if (encontrado == true) {
    cout << "El dato se encuentra en la posicion: " << posicion << endl;
  } else {
    cout << "El dato no se encuentra en el arreglo." << endl;
  }

  return 0;
}
