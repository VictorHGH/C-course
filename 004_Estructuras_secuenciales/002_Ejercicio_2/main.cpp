// Ejercicio 2: Hacer un programa para ingrasar el radio de un circulo
// y se reporte su área y la longitud de la circunferencia.

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float radio, area, longitud;
  const float pi = 3.14159;
  cout << "Digite el radio del circulo: ";
  cin >> radio;

  area = pi * pow(radio, 2);
  longitud = 2 * pi * radio;

  cout << "\nEl área del circulo es: " << area << endl;
  cout << "\nLa longitud del circulo es: " << longitud << endl;

  return 0;
}
