#include <iostream>
#include "Segundos.h"

using namespace std;

/*
 * 
Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica
expressa em segundos e mostre-o expresso em horas, minutos e segundos. 
 * 
*/

Segundos::Segundos() {
}

Segundos::Segundos(const Segundos& orig) {
}

Segundos::~Segundos() {
}

void Segundos::leitura(){
    int segundos;
    
    cout << "Informe o tempo do processo em segundos: ";
    cin >> segundos;
    cout << "\nTempo informado: " << segundos << "\nHORAS: " << this->calcular_horas(segundos) << "\nMINUTOS: " << this->calcular_minutos(segundos)
         << "\nSEGUNDOS: " << this->calcular_segundos(segundos);
}

int Segundos::calcular_horas(int segundos){
    return segundos / 3600;
}

int Segundos::calcular_minutos(int segundos){
    return (segundos % 3600) / 60;
}

int Segundos::calcular_segundos(int segundos){
    return (segundos % 3600) % 60;
}