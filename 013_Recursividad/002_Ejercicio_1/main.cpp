// Ejercicio 1: Escribir una función recursiva para elevar 
// un número a una potencia.

#include <iostream>
using namespace std;

int potencia(int num, int exp) {
  if (exp == 0) {
    return 1;
  } else {
    return num * potencia(num, exp - 1);
  }
}

int main() {
  int num, exp;

  cout << "Introduce un número: ";
  cin >> num;
  cout << "Introduce el exponente: ";
  cin >> exp;

  cout << "La potencia de " << num << " es: " << potencia(num, exp) << endl;

  return 0;
}
