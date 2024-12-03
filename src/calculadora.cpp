#include <iostream>
#include <vector>

#include "calculadora.hpp"

void Tela::adicione(Digito digito)
{
    switch (digito)
    {
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

void Tela::limpe()
{
    std::cout << "\n\n\n\n\n";
};

void Teclado::adicioneTecla(Tecla &tecla)
{
    teclas.push_back(&tecla);
};

void Tecla::pressione() {
};
