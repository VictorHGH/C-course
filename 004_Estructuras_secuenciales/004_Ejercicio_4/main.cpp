// Ejercicio 4: Una tienda ofrece un descuento del 15%
// sobre el total de la compra y un cliente desea saber
// cuánto deberá pagar finalmente por su compra.

#include <iostream>
using namespace std;

int main() {
  float precio;
  float descuento = 15;
  cout << "El descuento es del: " << descuento << "%" << endl;
  cout << "Digite el costo total: $";
  cin >> precio;
  float precioConDescuento = precio * ((100 - descuento) / 100);
  cout << "\nEl precio con descuento es de: $" << precioConDescuento << endl;
  return 0;
}
