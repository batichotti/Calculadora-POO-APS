#include "ucpMateus.hpp"

void UcpMateus::definaTela(Tela* tela){
  this->tela = tela;
}

Tela* UcpMateus::obtenhaTela(){
  return this->tela;
}