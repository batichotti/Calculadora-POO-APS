#include "ucpMateus.hpp"

void UcpMateus::definaTela(Tela* tela){
  this->tela = tela;
}

Tela* UcpMateus::obtenhaTela(){
  return this->tela;
}

bool UcpMateus::temOperacao(){
  if(this->operacaoCorrenteFlag == 0){
    return false;
  } else {
    return true;
  }
}

void UcpMateus::armazeneDigito(Digito digito){
  if(this->temOperacao()){
    if(this->digitosOperando2Count == 0){
      this->tela->limpe();
    }

    this->digitosOperando2[this->digitosOperando2Count++] = digito;

  } else {
    this->digitosOperando1[this->digitosOperando1Count++] = digito;
  }

}

void UcpMateus::calculeIgual(){
  // ULA
}

// ---------------------------------
// PUBLICO

void UcpMateus::recebaDigito(Digito digito){
  this->armazeneDigito(digito);

  this->tela->adicione(digito);
}

void UcpMateus::armazeneOperacao(Operacao operacao){
  this->operacaoCorrente = operacao;
  this->operacaoCorrenteFlag = 1;
}

void UcpMateus::recebaOperacao(Operacao operacao){
  this->armazeneOperacao(operacao);
}

void UcpMateus::recebaControle(Controle controle){
  switch (controle)
  {
  case IGUAL:
    this->calculeIgual();
    break;
  
  default:
    throw "Controle ainda indisponivel";
    break;
  }
}