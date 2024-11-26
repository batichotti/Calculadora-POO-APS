#include <iostream>
#include <vector>

/* Cabeçalho */
class Calculadora;
class Tecla;
class Cpu; //Central de Processamento Unânime
class Teclado;
class Tecla;

enum Digito{ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE};

enum Operação{SOMA, SUBTRACAO, MULTIPLICAO, DIVISAO, RAIZ_QUADRADA, PERCENTUAL};

enum Controle{LIGA_LIMPA, DESLIGA, MRC, M_SOMA, M_SUBTRACAO, PONTO_FLUTUANTE, IGUAL};

/* Implementação */
class Tela {};

class Cpu {
    Tela* tela;
};

class Teclado {
    Cpu* cpu;
    std::vector<Tecla&> teclas;

    public: void adicioneTecla(Tecla& tecla){
        teclas.push_back(tecla);
    }
};

class Tecla {
    Teclado* teclado;
    public: void pressione(){

    }
};

class Calculadora {
    Tela* tela;
    Cpu* cpu;
    Teclado* teclado;
};

int main(){
    Tecla tecla1;
    tecla1.pressione();

    Teclado teclado1;
    teclado1.adicioneTecla(tecla1);

    std::cout << "All it's okay!";
    return 0;
};