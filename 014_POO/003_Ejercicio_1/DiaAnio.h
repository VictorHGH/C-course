// Declaracion de una clase

class DiaAnio {
  // Atributos
private:
  int dia, mes;

  // Metodos
public:
  DiaAnio(int _dia, int _mes) { // Constructor
    dia = _dia;
    mes = _mes;
  }

  bool igual(DiaAnio &d); // Definimos el valor de X
  void visualizar();      // Definimos el valor de Y
};
