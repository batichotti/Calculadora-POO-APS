#include <iostream>
#include <vector>

#include "calculadora.hpp"

class TelaMateus: public Tela {
public:
  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};

class UcpMateus: public Ucp {
  Tela *tela;
public:
  void definaTela(Tela*);
  Tela* obtenhaTela();
};

class TeclaMateus: public Tecla {
  Teclado *teclado;
public:
  void pressione();
  
  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};

class CalculadoraMateus: public Calculadora {
  Tela *tela;
  Ucp *ucp;
  Teclado *teclado;
public:
  void definaTela(Tela*);
  Tela* obtenhaTela();

  void definaUcp(Ucp*);
  Ucp* obtenhaUcp();

  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};

class TecladoMateus: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);
  virtual void definaUcp(Ucp*);
  virtual Ucp* obtenhaUcp();
};
