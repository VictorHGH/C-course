#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  // metodo burbuja:
  int numeros[5];
  int i, j, aux;
  bool ordenado = false;

  srand(time(NULL));
  for (i = 0; i < 5; i++) {
    numeros[i] = 1 + rand() % (100);
  }

  cout << "Arreglo desordenado:" << endl;
  for (i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
  }

  // Arreglo burbuja convencional:
  /* for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  } */

  // Arreglo burbuja optimizado:
  i = 0;
  while (ordenado == false && i <= 4) {
    ordenado = true;
    for (j = 0; j < 4; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
        ordenado = false;
      }
    }
    i++;
  }

  // Imprimir el arreglo ordenado:
  cout << endl;
  cout << endl;
  cout << "Arreglo ordenado:" << endl;
  for (i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
  }

  return 0;
}
