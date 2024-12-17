#include "calculadora.hpp"

class TeclaMateus: public Tecla {
  Teclado *teclado;
public:
  void pressione();
  
  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};