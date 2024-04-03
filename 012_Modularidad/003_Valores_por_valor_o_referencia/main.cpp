#include <iostream>
using namespace std;

// Función por valor
int aumentar(int num) {
  int aumento;
  aumento = num + 10;
  return aumento;
}

// Función por referencia
void pedirDato(int &num) {
  cout << "Digite un número: "; 
  cin >> num;
}

int main() {
  int numero;

  pedirDato(numero);

  cout << "El aumento es: " << aumentar(numero) << endl;

  return 0;
}
