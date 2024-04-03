#include <iostream>
using namespace std;

class Cuadrilatero {
private:
  float lado1, lado2;

public:
  Cuadrilatero(float lado1, float lado2) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    cout << "\nEs un cuadrilatero\n" << endl;
  };
  Cuadrilatero(float lado) {
    this->lado1 = lado;
    this->lado2 = lado;
    cout << "\nEs un cuadrado\n" << endl;
  };

  float obtenerPerimetro();
  float obtenerArea();
};
