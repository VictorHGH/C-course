// Ejercicio 3: Crea un arreglo unidimensional con "N" números,
// lee los elmentos por teclado, guardalos en el arreglo, calcula
// cuál de los números es el mayor de todos y además cuál es el
// menor de todos.

#include <iostream>
using namespace std;

int main() {
  int long_arreglo;
  float mayor, menor;
  cout << "Digite la longitud del arreglo: ";
  cin >> long_arreglo;

  float arreglo[long_arreglo];

  cout << "Digite un número: ";
  cin >> mayor;
  menor = mayor;
  arreglo[0] = mayor;

  for (int i = 1; i < long_arreglo; i++) {
    cout << "Digite un número: ";
    cin >> arreglo[i];
    if (arreglo[i] > mayor) {
      mayor = arreglo[i];
    } else if (arreglo[i] < menor) {
      menor = arreglo[i];
    }
  }

  cout << endl;
  cout << "Los números que componen el arreglo son:" << endl;

  for (int i = 0; i < long_arreglo; i++) {
    cout << i + 1 << ". " << arreglo[i] << endl;
  }

  cout << endl;
  cout << "El número mayor es: " << mayor << endl;
  cout << "El número menor es: " << menor << endl;

  return 0;
}
