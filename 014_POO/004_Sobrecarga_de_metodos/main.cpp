// Sobrecarga de métodos

#include "Persona.cpp"

using namespace std;

int main(int argc, char **argv) {
  Persona *persona1 = new Persona("Juan", 30);
  Persona *persona2 = new Persona("12345678");

  persona1->correr();
  persona2->correr(10);

  return 0;
}
