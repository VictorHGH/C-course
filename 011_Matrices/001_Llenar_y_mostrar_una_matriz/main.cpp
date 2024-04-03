// Llenar y mostrar una matriz:

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int nums[3][3];
  // llenar la matriz:
  /* for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digíte un número [" << i << "][" << j << "]: ";
      cin >> nums[i][j];
    }
  } */

  // Llenar matriz de forma aleatoria:
  srand(time(NULL));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      nums[i][j] = 1 + rand() % 100;
    }
  }

  // Mostrar la matriz:
  cout << endl;
  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << nums[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
