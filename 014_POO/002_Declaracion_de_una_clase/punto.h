// Declaracion de una clase

class Punto {
  // Atributos
private:
  int x, y;

  // Metodos
public:
  Punto(int _x, int _y) { // constructor1
    x = _x;
    y = _y;
  }

  Punto() { x = y = 0; } // constructor2

  void setX(int valorX); // Definimos el valor de X
  void setY(int valorY); // Definimos el valor de Y
  int getX();            // Obtener el valor de X
  int getY();            // Obtener el valor de Y
};
