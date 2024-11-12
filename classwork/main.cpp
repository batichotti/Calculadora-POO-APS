#include <vector>

class Tela {};

class Cpu {
    Tela tela;
};

class Teclas{};

class Teclado {
    Cpu cpu;
    std::vector<Tecla> teclas;
};

class Tecla {
    Teclado teclado;
};

class Calculadora {
    Tela tela;
    Cpu cpu;
    Teclado teclado;
};