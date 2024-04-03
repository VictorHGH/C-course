// La sentencia while

#include <iostream>
using namespace std;

int main() {
  int conteo = 0;
  int numero;

  cout << "Digite un número: ";
  cin >> numero;

  while (numero != 0) {
    conteo++;

    cout << "Digite un número: ";
    cin >> numero;
  }

  cout << "\nEl total de número introducidos es: " << conteo << endl;

  return 0;
}
