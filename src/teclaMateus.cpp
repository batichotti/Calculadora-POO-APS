#include "teclaMateus.hpp"

void TeclaMateus::pressione(){
  std::cout << "";
}

void TeclaMateus::definaTeclado(Teclado* teclado){
  this->teclado = teclado;
}

Teclado* TeclaMateus::obtenhaTeclado(){
  return this->teclado;
}
