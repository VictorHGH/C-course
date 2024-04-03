// Ejercicio 1: Calcular la cantidad de segundos que están incluidos en el
// número de horas, minutos y segundos ingresados por el usuario.

#include <iostream>
using namespace std;
int main() {
  int horas, minutos, segundos;

  cout << "Digite el número de horas: ";
  cin >> horas;
  cout << "Digite el número de minutos: ";
  cin >> minutos;
  cout << "Digite el número de segundos: ";
  cin >> segundos;

  horas = horas * 3600;
  minutos = minutos * 60;

  segundos = segundos + horas + minutos;

  // \n se usa para dar un salto de linea
  cout << "\nEl total de segundos es: " << segundos << endl;

  return 0;
}
