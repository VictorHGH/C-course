// Ejercicio 4: Determinar si un alumno aprueba o reprueba un curso,
// sabiendo que aprobará si su promedio de tres calificaciones es mayor
// o igual a 70; reprueba en caso contrario.

#include <iostream>
using namespace std;

int main() {
  int num_calificaciones = 3;
  float calificaciones[num_calificaciones];
  float promedio;

  for (int i = 0; i < num_calificaciones; i++) {
    cout << i + 1 << ". Digite la calificacion: ";
    cin >> calificaciones[i];
  }

  float suma = 0;
  for (int i = 0; i < num_calificaciones; i++) {
    suma += calificaciones[i];
  }

  cout << "La suma de las calificaciones es: " << suma << endl;

  promedio = suma / num_calificaciones;
  cout << "El promedio es: " << promedio << endl;

  if (promedio >= 70) {
    cout << "Alumno aprobado" << endl;
  } else {
    cout << "Alumno reprobado" << endl;
  }

  return 0;
}
