#include "Triangulo.cpp"
#include <iostream>
using namespace std;

int main() {
  Triangulo *t1 = new Triangulo(3, 5, 6, 7);
  cout << "Numero de lados del triangulo: " << t1->getNLados() << endl;
  cout << "Area del triangulo: " << t1->areaTriangulo() << endl;
  return 0;
}
