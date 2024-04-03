#include "Animal.cpp"
#include <iostream>
using namespace std;

class AnimalCarnivoro : public Animal {
public:
  void alimentarse() { cout << "El animal carnívoro come carne" << endl; }
};
