// Ejercicio 2: Hacer un algoritmo que llene una matriz de 4*4. Calcular la suma
// de cada fila y almacenarla en un arreglo, la suma de cada columna y
// almacenarla en otro arreglo.

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int filas = 4, columnas = 4;
  int nums[filas][columnas];
  int sumaFilas, sumaColumnas;
  int arrSumaFilas[filas], arrSumaColumnas[columnas];

  srand(time(NULL));
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      nums[i][j] = 1 + rand() % 5;
    }
  }

  cout << endl;
  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < filas; i++) {
    sumaFilas = 0;
    sumaColumnas = 0;

    for (int j = 0; j < columnas; j++) {
      cout << nums[i][j] << " ";
      // Suma de cada fila:
      sumaFilas += nums[i][j];
      sumaColumnas += nums[j][i];
    }

    arrSumaFilas[i] = sumaFilas;
    arrSumaColumnas[i] = sumaColumnas;
    cout << endl;
  }

  cout << endl;
  cout << "La suma de cada fila es: " << endl;
  for (int i = 0; i < filas; i++) {
    cout << i + 1 << ". " << arrSumaFilas[i] << endl;
  }

  cout << endl;
  cout << "La suma de cada columna es: " << endl;
  for (int i = 0; i < filas; i++) {
    cout << i + 1 << ". " << arrSumaColumnas[i] << endl;
  }

  return 0;
}
