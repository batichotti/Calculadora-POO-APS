#include "calculadoraMateus.hpp"

void TelaMateus::adicione(Digito digito){
  switch (digito){
  case ZERO:
    std::cout << "0";
    break;
  case UM:
    std::cout << "1";
    break;
  case DOIS:
    std::cout << "2";
    break;
  case TRES:
    std::cout << "3";
    break;
  case QUATRO:
    std::cout << "4";
    break;
  case CINCO:
    std::cout << "5";
    break;
  case SEIS:
    std::cout << "6";
    break;
  case SETE:
    std::cout << "7";
    break;
  case OITO:
    std::cout << "8";
    break;
  case NOVE:
    std::cout << "9";
    break;
  default:
    std::cout << "Dígito ainda não implementado!\n";
  }
}

void TelaMateus::limpe() {
  std::cout << "\033[2J\033[H";
}

void TelaMateus::definaSinal(Sinal sinal){
  std::cout << (sinal == Sinal::NEGATIVO ? "-" : "");
}

void TelaMateus::definaSeparadorDecimal(){
  std::cout << ".";
}

void UcpMateus::definaTela(Tela* tela){
  this->tela = tela;
}

Tela* UcpMateus::obtenhaTela(){
  return this->tela;
}

void TeclaMateus::pressione(){
  std::cout << "";
}

void TeclaMateus::definaTeclado(Teclado* teclado){
  this->teclado = teclado;
}

Teclado* TeclaMateus::obtenhaTeclado(){
  return this->teclado;
}

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
