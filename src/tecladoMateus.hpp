#include "calculadora.hpp"

class TecladoMateus: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);
  virtual void definaUcp(Ucp*);
  virtual Ucp* obtenhaUcp();
};
