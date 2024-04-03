// Ejercicio 3: Leer tres números e imprimir el número mayor.

#include <iostream>
using namespace std;

int main() {
  float num1, num2, num3;
  cout << "Digite 3 números diferentes: ";
  cin >> num1 >> num2 >> num3;

  while (num1 == num2 || num1 == num3 || num2 == num3) {
    cout << "Digite 3 números diferentes: ";
    cin >> num1 >> num2 >> num3;
  }

  if (num1 > num2 && num1 > num3) {
    cout << "El número mayor es: " << num1 << endl;
  } else if (num2 > num1 && num2 > num3) {
    cout << "El número mayor es: " << num2 << endl;
  } else {
    cout << "El número mayor es: " << num3 << endl;
  }

  return 0;
}
