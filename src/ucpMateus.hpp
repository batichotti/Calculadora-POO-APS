#include "calculadora.hpp"

#define MAX_DIGITOS 8

class UcpMateus: public Ucp {
  Tela *tela;

  // const char MAX_DIGITOS = 8;
  Digito digitosOperando1[MAX_DIGITOS];
  char digitosOperando1Count = 0;

  Digito digitosOperando2[MAX_DIGITOS];
  char digitosOperando2Count = 0;

  Operacao operacaoCorrente;
  int operacaoCorrenteFlag = 0;

  void armazeneDigito(Digito);
  void armazeneOperacao(Operacao);
  bool temOperacao();
  void calculeIgual();
public:
  void definaTela(Tela*);
  Tela* obtenhaTela();
  
  void recebaDigito(Digito);
  void recebaOperacao(Operacao);
  void recebaControle(Controle);
};
