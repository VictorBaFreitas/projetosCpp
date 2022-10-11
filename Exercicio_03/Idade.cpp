#include <iostream>
#include "Idade.h"

using namespace std;

/*
 * 
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
mostre-a expressa apenas em dias.
 * 
*/

Idade::Idade() {
}

Idade::Idade(const Idade& orig) {
}

Idade::~Idade() {
}

void Idade::leitura(){
    int anos, meses, dias;
    
    cout << "Informe sua idade na ordem abaixo: \nANOS: \nMESES: \nDIAS: " << endl;
    cin >> anos >> meses >> dias;
    
    cout << "\nSua idade em dias é: " << this->calcular_idade(anos, meses, dias);
}

int Idade::calcular_idade(int anos, int meses, int dias){
    return anos * 365 + meses * 30 + dias;
}