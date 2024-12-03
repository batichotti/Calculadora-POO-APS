#include <iostream>
#include <vector>

class Calculadora;
class Tecla;
class Cpu; //Central de Processamento Unitária
class Teclado;
class Tecla;

enum Digito{ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE};

enum Operacao{SOMA, SUBTRACAO, MULTIPLICAO, DIVISAO, RADICIACAO, PORCENTAGEM};

enum Controle{LIGA_LIMPA_ERRO, DESLIGA, MEMORIA_LEITURA_ESCRITA, MEMORIA_SOMA, MEMORIA_SUBTRACAO, IGUAL, SEPARADOR_DECIMAL};

class Tela {
    
    public:
        void adicione(Digito digito);
        void limpe();
};

class Cpu {
    Tela* tela;
};

class Teclado {
    Cpu* cpu;
    std::vector<Tecla*> teclas;

    public: void adicioneTecla(Tecla& tecla);
};

class Tecla {
    Teclado* teclado;
    public:
        void pressione();
};

class Calculadora {
    Tela* tela;
    Cpu* cpu;
    Teclado* teclado;
};
