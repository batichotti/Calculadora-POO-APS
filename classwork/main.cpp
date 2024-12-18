#include <iostream>
#include <vector>

/* Cabeçalho */
class Calculadora;
class Tecla;
class Cpu; //Central de Processamento Unitário
class Teclado;
class Tecla;

enum Digito{ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE};

enum Operacao{SOMA, SUBTRACAO, MULTIPLICAO, DIVISAO, RADICIACAO, PORCENTAGEM};

enum Controle{LIGA_LIMPA_ERRO, DESLIGA, MEMORIA_LEITURA_ESCRITA, MEMORIA_SOMA, MEMORIA_SUBTRACAO, IGUAL, SEPARADOR_DECIMAL};

/* Implementação */
class Tela { // Display de 7 segmentos e 8 digitos + multiplexação + GND + M/E = +-26 fios
    
    public:
        void adicione(Digito digito){
            switch (digito){
            case ZERO:
                std::cout << "0 ";
                break;
            case UM:
                std::cout << "1 ";
                break;
            case DOIS:
                std::cout << "2 ";
                break;
            case TRES:
                std::cout << "3 ";
                break;
            case QUATRO:
                std::cout << "4 ";
                break;
            case CINCO:
                std::cout << "5 ";
                break;
            case SEIS:
                std::cout << "6 ";
                break;
            case SETE:
                std::cout << "7 ";
                break;
            case OITO:
                std::cout << "8 ";
                break;
            case NOVE:
                std::cout << "9 ";
                break;
            default:
            std::cout << "Digito ainda não implementado";
                break;
            }
        };
        void limpe(){
            std::cout << "\n\n\n\n\n";
        };
};

class Cpu {
    Tela* tela;
};

class Teclado {
    Cpu* cpu;
    std::vector<Tecla*> teclas;

    public: void adicioneTecla(Tecla& tecla){
        teclas.push_back(&tecla);
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

    Tela t1;
    t1.adicione(ZERO);
    t1.adicione(UM);
    t1.limpe();

    std::cout << "All it's okay!";
    return 0;
};