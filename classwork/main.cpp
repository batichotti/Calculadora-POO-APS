class Tela {};

class Cpu {
    Tela tela;
};

class Teclado {
    Cpu cpu;
};

class Tecla {
    Teclado teclado;
};

class Calculadora {
    Tela tela;
    Cpu cpu;
    Teclado teclado;
};