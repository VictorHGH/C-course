// clase padre:
class Figura {
private:
  int nLados;

public:
  Figura(int nLados) { this->nLados = nLados; };

  int getNLados() { return nLados; }
};
