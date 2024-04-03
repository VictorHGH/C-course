#include "DiaAnio.h"
#include <iostream>

using namespace std;

// Definimos el valor de X
bool DiaAnio::igual(DiaAnio &d) {
  if (dia == d.dia && mes == d.mes) {
    return true;
  } else {
    return false;
  }
}

// Definimos el valor de Y
void DiaAnio::visualizar() {
  cout << "Mostrando fecha: " << endl;
  cout << "Día: " << dia << "\nMes: " << mes << endl;
}
