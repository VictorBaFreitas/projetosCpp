#include <iostream>
#include "Operacao.h"
#include <math.h>

using namespace std;

/*
 * 
Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a
seguinte expressão: d = pow((r + s), 2), onde r = pow((a + b), 2)
e s = pow((b + c), 2).
 * 
*/

Operacao::Operacao() {
}

Operacao::Operacao(const Operacao& orig) {
}

Operacao::~Operacao() {
}

void Operacao::leitura(){
    int numero1, numero2, numero3;
    
    cout << "Informe 3 números inteiros e positivos: " << endl;
    cin >> numero1 >> numero2 >> numero3;
    
    cout << "\nNúmero 1: " << numero1 << " número 2: " << numero2 << " número 3: " 
         << numero3 << ". Calculo da expressão: " << this->calcular(numero1, numero2, numero3) << endl;
}

int Operacao::calcular(int numero1, int numero2, int numero3){
    return pow(pow((numero1 + numero2), 2) + pow((numero2 + numero3), 2), 2);
}