#include "Plano.h"
#include <iostream>
#include <math.h>

using namespace std;

/*
 
Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no
plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo:
sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)).
 
 */

Plano::Plano() {
}

Plano::Plano(const Plano& orig) {
}

Plano::~Plano() {
}

void Plano::leitura(){
    int pontoX1, pontoX2, pontoY1, pontoY2;
    
    cout << "Informe a primeria coordenada: " << endl;
    cin >> pontoX1 >> pontoY1;
    
    cout << "\nInforme a segunda coodernada: " << endl;
    cin >> pontoX2 >> pontoY2;
    
    cout << "\nA distância entre os pontos é: " << this->calcular_distancia(pontoX1, pontoX2, pontoY1, pontoY2);
}
float Plano::calcular_distancia(int pontoX1, int pontoX2, int pontoY1, int pontoY2){
    return sqrt(pow((pontoX2 - pontoX1), 2) + pow((pontoY2 - pontoY1), 2));
}