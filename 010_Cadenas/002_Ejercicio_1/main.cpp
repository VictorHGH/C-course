// Ejercicio 1: Diseñe un programa que permita ingresar una cadena de
// caracteres, y detecte cuántas vocales tiene.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;
  int count_vocals = 0;
  char vocales[] = {'a', 'e', 'i', 'o', 'u'};
  cout << "Digíte una frase: ";
  getline(cin, frase);

  for (int i = 0; i < frase.length(); i++) {
    for (int j = 0; j < 5; j++) {
      if (vocales[j] == frase[i]) {
        count_vocals += 1;
      }
    }
  }

  cout << "El número de vocales es: " << count_vocals << endl;

  return 0;
}
