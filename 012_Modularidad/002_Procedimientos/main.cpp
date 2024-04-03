#include <iostream>
using namespace std;

void calcularMitad(float numero) {
  float mitad = numero / 2;
  cout << "La mitad del número es: " << mitad << endl;
}

int main() {
  float numero;

  cout << "Digite un número: ";
  cin >> numero;

  calcularMitad(numero);

  return 0;
}
