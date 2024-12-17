#include "tecladoMateus.hpp"

void TecladoMateus::adicioneTecla(Tecla &tecla){
  teclas.push_back(&tecla);
  tecla.definaTeclado(this);
}

void TecladoMateus::definaUcp(Ucp* ucp){
  this->ucp = ucp;
}

Ucp* TecladoMateus::obtenhaUcp(){
  return this->ucp;
}
