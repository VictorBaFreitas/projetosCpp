#include <iostream>
#include "Maior.h"

using namespace std;

/*
 * 
Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre o maior
dos 3 valores e o escreva com a mensagem : "É o maior ".
 *  
*/

Maior::Maior() {
}

Maior::Maior(const Maior& orig) {
}

Maior::~Maior() {
}

void Maior::leitura(){
    int numero1, numero2, numero3;
    
    cout << "Digite 3 números inteiro para calcular o maior: " << endl;
    cin >> numero1 >> numero2 >> numero3;
    
    cout << "\nNúmero 1: " << numero1 << "\nNúmero 2: " << numero2 << "\nNúmero 3: " 
         << numero3 << "\nMaior: " << this->calcular_maior(numero1, numero2, numero3) << endl;
}

int Maior::calcular_maior(int numero1, int numero2, int numero3){
    if (numero1 > numero2 && numero1 > numero3 || numero1 == numero2 || numero1 == numero2)
        return numero1;
    else if (numero2 > numero1 && numero2 > numero3 || numero2 == numero1 || numero2 == numero3)
        return numero2;
    else 
        return numero3;
}