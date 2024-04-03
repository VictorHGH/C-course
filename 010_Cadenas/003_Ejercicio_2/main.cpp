// Ejercicio 2: Calcular la longitud de 2 cadenas de caracteres y mostrar
// la cadena con la mayor longitud.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase1, frase2;

  // Pedir las cadenas
  cout << "Digíte la primera frase: ";
  getline(cin, frase1);
  cout << endl;
  cout << "Digíte la segunda frase: ";
  getline(cin, frase2);
  cout << endl;

  if (frase1.length() > frase2.length()) {
    cout << "La frase con mayor longitud es: " << frase1 << endl;
  } else if (frase2.length() > frase1.length()) {
    cout << "La frase con mayor longitud es: " << frase2 << endl;
  } else {
    cout << "Las frases tienen la misma longitud" << endl;
  }

  return 0;
}
