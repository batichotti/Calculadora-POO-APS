#include "calculadora.hpp"

class TelaMateus: public Tela {
public:
  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};