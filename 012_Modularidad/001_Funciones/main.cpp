#include <iostream>
using namespace std;

// Definición de la función sumar
int sumar(int num1, int num2) {
  int suma;
  suma = num1 + num2;
  return suma;
}

int main() {
  int num1, num2, suma;

  cout << "Ingrese dos números:" << endl;
  cin >> num1 >> num2;

  // Llamada a la función sumar
  suma = sumar(num1, num2);
  cout << "La suma de los números es: " << suma << endl;

  return 0;
}
