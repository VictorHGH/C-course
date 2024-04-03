#include "SerVivo.cpp"
#include <iostream>
using namespace std;

class Planta : public SerVivo {
public:
  void alimentarse() { cout << "La planta realiza la fotosíntesis" << endl; }
};
