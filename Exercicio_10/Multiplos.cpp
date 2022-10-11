#include <iostream>
#include "Multiplos.h"

using namespace std;

/*
 * 
Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São
múltiplos" ou "Não são múltiplos".
 *  
*/

Multiplos::Multiplos() {
}

Multiplos::Multiplos(const Multiplos& orig) {
}

Multiplos::~Multiplos() {
}

void Multiplos::leitura(){
    int numero1, numero2;
    
    cout << "Digite 2 números para calcular e descobrir se são múltiplos ou não: " << endl;
    cin >> numero1 >> numero2;
    
    if (this->calcular_multiplos(numero1, numero2) == 0)
        cout << "\nNúmero 1: " << numero1 << "\nNúmero 2: " << numero2 << "\nSão múltiplos! " << endl;
    else 
        cout << "\nNúmero 1: " << numero1 << "\nNúmero 2: " << numero2 << "\nNão são múltiplos! " << endl;
}

int Multiplos::calcular_multiplos(int numero1, int numero2){
    if (numero1 % numero2 == 0 || numero2 % numero1 == 0)
        return 0;
    else
        return -1;
}