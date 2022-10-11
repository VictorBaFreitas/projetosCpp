#include <iostream>
#include "Custo.h"

using namespace std;

/*
 * 
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
 *  
*/

Custo::Custo() {
}

Custo::Custo(const Custo& orig) {
}

Custo::~Custo() {
}

void Custo::leitura(){
    float valor_fabrica;
    
    cout << "Informe o valor de fabrica do veículo: ";
    cin >> valor_fabrica;
    
    cout << "\nValor de fábrica: " << valor_fabrica << "\nValor do consumidor: " << this->calcular_valorConsumidor(valor_fabrica) << endl;
}

float Custo::calcular_valorConsumidor(float valor_fabrica){
    return valor_fabrica + ((valor_fabrica * 0.45) * 0.28);
}