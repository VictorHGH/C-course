// Ejercicio 1: Hacer un algoritmo que almacene números en una matriz de
// 3*4. Imprimir la suma de los números pares almacenados en la matriz.

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int filas = 3, columnas = 4;
  int nums[filas][columnas];
  int suma = 0;

  srand(time(NULL));
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      nums[i][j] = 1 + rand() % 10;
    }
  }

  cout << endl;
  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << nums[i][j] << " ";
      // suma de todos los números pares:
      if (nums[i][j] % 2 == 0) {
        suma += nums[i][j];
      }
    }
    cout << endl;
  }

  cout << endl;
  cout << "La suma de todos los números pares es: " << suma << endl;

  return 0;
}
