#include "calculadora.hpp"

class UcpMateus: public Ucp {
  Tela *tela;
public:
  void definaTela(Tela*);
  Tela* obtenhaTela();
};
