#include "calculadoraMateus.hpp"

void CalculadoraMateus::definaTela(Tela* tela){
  this->tela = tela;
}

Tela* CalculadoraMateus::obtenhaTela(){
  return this->tela;
}

void CalculadoraMateus::definaUcp(Ucp* ucp){
  this->ucp = ucp;
}

Ucp* CalculadoraMateus::obtenhaUcp(){
  return this->ucp;
}

void CalculadoraMateus::definaTeclado(Teclado* teclado){
  this->teclado = teclado;
}

Teclado* CalculadoraMateus::obtenhaTeclado(){
  return this->teclado;
}
