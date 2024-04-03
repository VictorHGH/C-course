// La sentencia do while

#include <iostream>
using namespace std;

int main() {
  int num, conteo = 0;

  do {
    cout << "Digite un número: ";
    cin >> num;
    conteo++;
  } while (num != 0);

  cout << "\nEl total de números introducidos es: " << conteo << endl;

  return 0;
}
