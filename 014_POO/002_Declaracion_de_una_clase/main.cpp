#include "punto.cpp"
#include <iostream>
using namespace std;

int main() {
  // Cración de un objeto estático
  Punto punto1(3, 4);
  cout << "El valor de X es: " << punto1.getX() << endl;
  cout << "El valor de Y es: " << punto1.getY() << endl;

  // Creación de un objeto dinámico
  Punto *punto2 = new Punto();

  punto2->setX(5);
  punto2->setY(10);

  cout << "\nEl valor de X es: " << punto2->getX() << endl;
  cout << "El valor de Y es: " << punto2->getY() << endl;

  return 0;
}
