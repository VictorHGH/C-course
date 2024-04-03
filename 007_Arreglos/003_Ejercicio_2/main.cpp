// Ejercicio 2: Crea un arreglo unidimensional con "N" caracteres,
// lee los elementos por teclado, guardarlos en el arreglo y
// muéstralos en el orden inverso al introducido.

#include <iostream>
using namespace std;

int main() {
  int long_arreglo;
  cout << "Digite la longitud del arreglo: ";
  cin >> long_arreglo;

  char arreglo[long_arreglo];

  for (int i = 0; i < long_arreglo; i++) {
    cout << "Digite un caracter: ";
    cin >> arreglo[i];
  }

  cout << endl;

  for (int i = (long_arreglo - 1); i >= 0; i--) {
    cout << i << ". " << arreglo[i] << endl;
  }

  return 0;
}
