#include <iostream>
#include <vector>

#include "calculadoraMateus.hpp"

int main() {

  TeclaMateus tecla1;
  tecla1.pressione();

  TecladoMateus teclado1;
  teclado1.adicioneTecla(tecla1);

  TelaMateus t1;
  t1.adicione(ZERO);
  t1.adicione(UM);
  t1.limpe();
  t1.definaSinal(NEGATIVO);
  t1.adicione(UM);
  t1.definaSeparadorDecimal();
  t1.adicione(ZERO);

  std::cout << "\nAll it's okey!\n";
  return 0;
}
