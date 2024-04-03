// Ejercicio 1: Calcular el factorial de un número mayor o igual a 0.

#include <iostream>
using namespace std;

int main() {
  int num;
  double factorial = 1;

  // Pedir datos:
  do {
    cout << "Ingrese un número: ";
    cin >> num;
  } while (num < 0);

  // Sacar el factorial:
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }

  // Imprimir el resultado:
  cout << "El factorial de " << num << " es: " << factorial << endl;

  return 0;
}
