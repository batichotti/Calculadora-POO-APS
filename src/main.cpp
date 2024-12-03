#include <iostream>
#include <vector>


int main(){
    Tecla tecla1;
    tecla1.pressione();

    Teclado teclado1;
    teclado1.adicioneTecla(tecla1);

    Tela t1;
    t1.adicione(ZERO);
    t1.adicione(UM);
    t1.limpe();

    std::cout << "All it's okay!";
    return 0;
};