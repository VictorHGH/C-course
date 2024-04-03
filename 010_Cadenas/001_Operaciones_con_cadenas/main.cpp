// Operaciones con cadenas en C++

#include <iostream>
#include <string>

using namespace std;

int main() {
  string frase = "Hola mundo";
  string frase2;
  string frase3;
  int tam;
  tam = frase.length();

  frase2 = frase.substr(0, 4);
  frase3 = frase + " " + frase2;

  cout << "La frase tiene " << tam << " caracteres" << endl;
  cout << frase2 << endl;
  cout << frase3 << endl;

  return 0;
}
