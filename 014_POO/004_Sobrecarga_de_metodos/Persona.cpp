#include "Persona.h"
#include <iostream>

using namespace std;

void Persona::correr() {
  cout << "Soy " << nombre << " tengo " << edad << " años y estoy corriendo.";
  cout << endl;
}

void Persona::correr(int km) {
  cout << "He corrido " << km << " kilómetros" << endl;
}
