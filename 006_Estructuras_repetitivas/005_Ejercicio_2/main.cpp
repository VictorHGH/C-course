// Ejercicio 2: Ingresar un número y mostrar la suma de cada una
// de sus cifras.
// Ejemplo: 123 -> 1 + 2 + 3 = 6

#include <iostream>
using namespace std;

int main() {
  int num, digito, suma = 0;
  cout << "Digite un número: ";
  cin >> num;

  while (num != 0) {
    digito = num % 10;
    num /= 10;
    suma += digito;
  }

  if (suma < 0) {
    suma *= -1;
  }

  cout << "La suma de los digitos es: " << suma << endl;

  return 0;
}
