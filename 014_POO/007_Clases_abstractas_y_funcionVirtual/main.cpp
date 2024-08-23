#include "AnimalCarnivoro.cpp"
#include "AnimalHerbivoro.cpp"
#include "Planta.cpp"
using namespace std;

int main() {

  Planta *planta1 = new Planta();
  planta1->alimentarse();
  cout << endl;

  AnimalCarnivoro *animalCarnivoro1 = new AnimalCarnivoro();
  animalCarnivoro1->alimentarse();
  cout << endl;

  AnimalHerbivoro *animalHerbivoro1 = new AnimalHerbivoro();
  animalHerbivoro1->alimentarse();
  cout << endl;

  return 0;
}
