// Ejemplo de factorial con recursividad

#include <iostream>
using namespace std;

int factorial(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

int main() {
  int num;

  cout << "Introduce un número: ";
  cin >> num;

  cout << "El factorial de " << num << " es: " << factorial(num) << endl;

  return 0;
}
