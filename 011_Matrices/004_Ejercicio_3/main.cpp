// Ejercicio 3: Hacer un algoritmo que llene una matriz de 4*4 y que almacene
// la diagonal principal en un arreglo. Imprimir el arreglo resultante.

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int filas = 4, columnas = 4;
  int nums[filas][columnas];
  int diagonalPrincipal[filas];

  // Llenar columna automaticamente:
  srand(time(NULL));
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      nums[i][j] = 1 + rand() % 5;
    }
  }

  // Mostrar la matriz:
  cout << endl;
  cout << "Matriz:" << endl;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << nums[i][j] << " ";
      if (j == i) {
        diagonalPrincipal[i] = nums[i][j];
      }
    }
    cout << endl;
  }

  cout << endl;
  cout << "La diagonal principal de la matriz es:" << endl;
  for (int i = 0; i < filas; i++) {
    cout << diagonalPrincipal[i] << " ";
  }

  return 0;
}
