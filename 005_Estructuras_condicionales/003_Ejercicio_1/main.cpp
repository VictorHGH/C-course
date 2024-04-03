// Ejercicio 1: Ingrese un número entero y muestre si es par o impar.

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Ingrese un número: ";
  cin >> num;

  if (num % 2 == 0) {
    cout << "El número " << num << " es par." << endl;
  } else {
    cout << "El número " << num << " es impar." << endl;
  }

  return 0;
}
