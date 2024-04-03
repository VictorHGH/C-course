// Ejercicio 4: Diseñar un algoritmo que tomando como entrada un acadena de
// texto nos devuelva si es o no un palíndromo. Se conoce que se denomina
// palíndromo a una palabra o frase que, ignorando los blancos, se lee igual
// de izquierda a derecha que de derecha a izquierda.

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase, fraseSinEspacios = "", fraseRevez = "";
  cout << "Digíte una frase: ";
  getline(cin, frase);

  for (int i = 0; i < frase.length(); i++) {
    if (frase[i] != ' ') {
      fraseSinEspacios += tolower(frase[i]);
    }
  }

  for (int i = fraseSinEspacios.length() - 1; i >= 0; i--) {
    fraseRevez += fraseSinEspacios[i];
  }

  if (fraseSinEspacios == fraseRevez) {
    cout << "La frase: --" << frase << "-- es un palíndromo" << endl;
  } else {
    cout << "La frase: --" << frase << "-- no es un palíndromo" << endl;
  }

  return 0;
}
