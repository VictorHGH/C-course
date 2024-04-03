#include "Animal.cpp"
#include <iostream>
using namespace std;

class AnimalHerbivoro : public Animal {
public:
  void alimentarse() { cout << "El animal Herbivoro como hierbas" << endl; }
};
