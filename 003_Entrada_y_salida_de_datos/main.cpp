// Entrada y salida de datos

#include <iostream>
using namespace std;

int main() {
  int numero;

  cout << "Digite un número: ";
  // Entrada de datos
  cin >> numero;

  // Salida de datos
  cout << "El número que digito es: " << numero << endl;

  // En caso de strings se puede usar getline(cin, variable)
  string nombre;
  // Entrada de datos
  cout << "Digite su nombre: ";
  getline(cin, nombre);
  // Salida de datos
  cout << "Su nombre es: " << nombre << endl;

  return 0;
}
