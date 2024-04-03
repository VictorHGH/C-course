// Ejercicio 2: Diseñe un algoritmo que muestre un menú al usuario con las
// siguientes opciones: potenciación, raíz cuadrada y terminar, que
// cada opción la realice una función o procedimiento.

#include <cmath>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

float potenciacion(float num) {
  int potencia;
  cout << "Digite el exponente: ";
  cin >> potencia;
  num = pow(num, potencia);
  cout << "La potencia es: " << num << endl;
  return num;
}

float raizCuadrada(float num) {
  num = sqrt(num);
  cout << "La raíz cuadrada es: " << num << endl;
  return num;
}

void pedirNumero(float &num) {
  cout << "Digíte un número: ";
  cin >> num;
}

void menu(float &num) {
  int opcion;
  do {
    cout << "Menú" << endl;
    cout << "Seleccione una opción:" << endl;
    cout << "1. Potenciación" << endl;
    cout << "2. Raíz cuadrada" << endl;
    cout << "3. Terminar" << endl;
    cin >> opcion;
  } while (opcion != 1 && opcion != 2 && opcion != 3);

  if (opcion == 1) {
    pedirNumero(num);
    potenciacion(num);
  } else if (opcion == 2) {
    pedirNumero(num);
    raizCuadrada(num);
  }
}

int main() {
  float num;
  menu(num);
  return 0;
}
