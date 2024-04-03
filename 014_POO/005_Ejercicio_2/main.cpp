// Ejercicio 2: Cosntruir un programa que calcule el área y el perímetro de un
// cuadrilátero dada la longitud de sus dos lados. Los valores de la longitud
// deberán ser introducirce por línea de ordenes. Si es un cuadrado, sólo se
// proporcionará la longitud de uno de los lados al constructor.

#include "Cuadrilatero.cpp"
#include <iostream>
using namespace std;

int main() {
  float lado1, lado2;
  Cuadrilatero *cuadrilatero;

  cout << "Introduce la longitud del primer lado: ";
  cin >> lado1;
  cout << "Introduce la longitud del segundo lado: ";
  cin >> lado2;

  if (lado1 == lado2) {
    cuadrilatero = new Cuadrilatero(lado1);
  } else {
    cuadrilatero = new Cuadrilatero(lado1, lado2);
  }

  cout << "El perimetro es: " << cuadrilatero->obtenerPerimetro() << endl;
  cout << "El area es: " << cuadrilatero->obtenerArea() << endl;

  return 0;
}
