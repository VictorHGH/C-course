#include "Poligono.cpp"
#include "Rectangulo.cpp"
#include "Triangulo.cpp"
#include <iostream>
using namespace std;

int main() {
  Poligono *poligonos[2];
  poligonos[0] = new Rectangulo(7, 4);
  poligonos[1] = new Triangulo(3, 4, 4);

  for (int i = 0; i < 2; i++) {
    cout << "Perimetro: " << poligonos[i]->perimetro() << endl;
    cout << "Area: " << poligonos[i]->area() << endl;
    cout << endl;
  }

  return 0;
}
