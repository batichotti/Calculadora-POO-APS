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
  
  void definaTeclado(Teclado*) = 0;
  Teclado* obtenhaTeclado() = 0;
};

class CalculadoraMateus: public Calculadora {
  Tela *tela;
  Ucp *ucp;
  Teclado *teclado;
public:
  void definaTela(Tela*) = 0;
  Tela* obtenhaTela()= 0;

  void definaUcp(Ucp*) = 0;
  Ucp* obtenhaUcp()= 0;

  void definaTeclado(Teclado*) = 0;
  Teclado* obtenhaTeclado() = 0;
};

class TecladoMateus: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);
  virtual void definaUcp(Ucp*) = 0;
  virtual Ucp* obtenhaUcp() = 0;
};
