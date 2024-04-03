// Ejercicio 4: Elaborar un programa que me muestre los días de la semana
// cuando ingrese los siete primeros números.

#include <iostream>
using namespace std;

int main() {
  int dia;
  string dias_semana[7];
  dias_semana[0] = "Lunes";
  dias_semana[1] = "Martes";
  dias_semana[2] = "Miércoles";
  dias_semana[3] = "Jueves";
  dias_semana[4] = "Viernes";
  dias_semana[5] = "Sábado";
  dias_semana[6] = "Domingo";

  cout << "Digite un número de la semana: ";
  cin >> dia;

  while (dia <= 0 || dia >= 8) {
    cout << "Digite un número de la semana: ";
    cin >> dia;
    dia -= 1;
  }

  cout << "El día es: " << dias_semana[dia] << endl;

  return 0;
}
