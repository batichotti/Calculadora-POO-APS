#include <vector>

class Calculadora;
class Tecla;
class Cpu;
class Teclado;
class Tecla;

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
};