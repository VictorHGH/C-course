// Ejercicio 3: Hacer un programa que pida N números al usuario,
// hasta que el usuario lo decida, luego calcular el promedio de
// dichos números.

#include <iostream>
using namespace std;

int main() {
  float num, suma = 0, promedio;
  int n_nums = 0;
  string salida = "n";

  do {
    cout << "Digite un número: ";
    cin >> num;
    suma += num;
    n_nums++;

    do {
      cout << "Desea salir (y/n)?: ";
      cin >> salida;
    } while (salida != "y" && salida != "n");

  } while (salida != "y");

  promedio = suma / n_nums;

  cout << "El promedio de los números es: " << promedio << endl;

  return 0;
}
