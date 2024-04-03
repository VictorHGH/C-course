// Ejercicio 3: Un maestro desea saber que porcentaje de hombres
// y que porcentaje de mujeres hay en un grupo de estudiantes.

#include <iostream>
using namespace std;

int main() {
  int num_hombres, num_mujeres;
  cout << "Ingrese el número de hombres: ";
  cin >> num_hombres;
  cout << "Ingrese el número de mujeres: ";
  cin >> num_mujeres;

  float total = num_hombres + num_mujeres;
  float porcentaje_h = (num_hombres * 100) / total;
  float porcentaje_m = (num_mujeres * 100) / total;

  cout << "\nEl % de hombres es: " << porcentaje_h << "%" << endl;
  cout << "El % de mujeres es: " << porcentaje_m << "%" << endl;
  return 0;
}
