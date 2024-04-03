// Ejercicio 4: Leer por teclado una serie de 5 números reales. El programa
// debe indicarnos si los números están ordenados de forma creciente,
// decreciete, o si están desordenados.

#include <iostream>
using namespace std;

int main() {
  float nums[5];
  bool asc = false, desc = false;

  for (int i = 0; i < 5; i++) {
    cout << "Digite un número: ";
    cin >> nums[i];
  }

  for (int i = 0; i < 4; i++) {
    if (nums[i] < nums[i + 1]) {
      asc = true;
    } else if (nums[i] > nums[i + 1]) {
      desc = true;
    }
  }

  cout << endl;

  if (asc == true && desc == false) {
    cout << "Los números estan ordenados de forma ascendente." << endl;
  } else if (desc == true && asc == false) {
    cout << "Los números estan ordenados de forma descendente." << endl;
  } else {
    cout << "Los números estan desordenados" << endl;
  }

  return 0;
}
