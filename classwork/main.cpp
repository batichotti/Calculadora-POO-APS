#include <iostream>
#include <vector>

/* Cabeçalho */
class Calculadora;
class Tecla;
class Cpu; //Central de Processamento Unânime
class Teclado;
class Tecla;

enum Digito{ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE};

enum Operacao{SOMA, SUBTRACAO, MULTIPLICAO, DIVISAO, RADICIACAO, PORCENTAGEM};

enum Controle{LIGA_LIMPA_ERRO, DESLIGA, MEMORIA_LEITURA_ESCRITA, MEMORIA_SOMA, MEMORIA_SUBTRACAO, IGUAL, SEPARADOR_DECIMAL};

/* Implementação */
class Tela { // Display de 7 segmentos e 8 digitos + multiplexação + GND + M/E = +-26 fios
    
    public:
        void adicione(Digito digito){};
        void adicione(Operacao operacao){};
        void adicione(Controle controle){};
};

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