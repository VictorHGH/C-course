#include "AnimalCarnivoro.cpp"
#include "Planta.cpp"
using namespace std;

int main() {
  Planta *planta1 = new Planta();
  planta1->alimentarse();

  cout << endl;
  AnimalCarnivoro *animalCarnivoro1 = new AnimalCarnivoro();
  animalCarnivoro1->alimentarse();

  return 0;
}
