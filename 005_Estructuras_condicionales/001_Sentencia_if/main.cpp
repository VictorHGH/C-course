// La sentencia if

#include <iostream>
using namespace std;

int main() {
  int edad;

  cout << "Digite la edad del usuario: ";
  cin >> edad;

  if (edad >= 18) {
    cout << "Tiene la edad para votar" << endl;
  } else {
    cout << "No tiene la edad para votar" << endl;
  }

  return 0;
}
