#include <iostream>
#include "Idade.h"

using namespace std;

/*
 * 
Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias. 
 * 
*/

Idade::Idade() {
}

Idade::Idade(const Idade& orig) {
}

Idade::~Idade() {
}

void Idade::leitura(){
    int idade;
    
    cout << "Informe sua idade em dias: " << endl;
    cin >> idade;
    cout << "\nANOS: " << this->calcular_anos(idade) << "\nMESES: " << this->calcular_meses(idade) << "\nDIAS: " << this->calcular_dias(idade);
}

int Idade::calcular_anos(int idade){
    return idade / 365;
}

int Idade::calcular_meses(int idade){
    return (idade % 365) / 30;
}

int Idade::calcular_dias(int idade){
    return (idade % 365) % 30;
}