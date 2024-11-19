#include <iostream>
#include <vector>

/* Header */

class Pessoa;

/* Implementation */

class Pessoa {
    private: float peso;

    public:
        void setPeso(float value){
            if ( value > 0 && value <= 595 ){
                this->peso = value;
            } else {
                std::cerr << "ERRO: Pessoa.setPeso() - Peso inválido (fora do range ]0-595] )";
            }
        }
        float getPeso(){
            return this->peso;
        }
};

int main(){

    Pessoa p1;
    p1.setPeso(100);

    std::cout << "A pessoa p1 pesa " << p1.getPeso() << "kg." << std::endl;

    return 0;
};