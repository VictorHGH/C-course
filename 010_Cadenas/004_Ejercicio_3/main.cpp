// Ejercicio 3: Diseñe un algoritmo que elimine los espacios en blanco de un 
// exto. Ejemplo: "Hola que tal?"; El resultado debe ser: "Holaquetal?"

#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;
  string fraseSinEspacios = "";

  cout << "Digíte una frase: ";
  getline(cin, frase);

  for (int i = 0; i < frase.length(); i++) {
    if (frase[i] != ' ') {
      fraseSinEspacios += frase[i];
    }
  }

  cout << "Frase sin espacios: " << fraseSinEspacios << endl;

  return 0;
}
