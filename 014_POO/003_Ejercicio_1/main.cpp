// Ejercicio 1: Definir una clase DiaAnio con los atributos mes y día, los 
// métodos igual() y visualizar(). El mes se registra como un valor entero (1,
// Enero, 2, Febrero, etc.). El día del mes se registra en otra variable entera 
// ia. Escribir un programa que compruebe si una fecha es su cumpleaños.

#include "DiaAnio.cpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  DiaAnio *hoy;
  DiaAnio *cumple;
  int d, m;

  cout << "Introduce la fecha de hoy, dia: ";
  cin >> d;
  cout << "Introduce el número de mes: ";
  cin >> m;
  hoy = new DiaAnio(d, m);

  cout << "Introduce la fecha de tu cumpleaños, dia: ";
  cin >> d;
  cout << "Introduce el número de mes: ";
  cin >> m;
  cumple = new DiaAnio(d, m);

  cout << endl;
  hoy->visualizar();
  cout << endl;
  cumple->visualizar();
  cout << endl;

  if (hoy->igual(*cumple)) {
    cout << "Feliz cumpleaños!" << endl;
  } else {
    cout << "Hoy no es tu cumpleaños." << endl;
  }

  return 0;
}
