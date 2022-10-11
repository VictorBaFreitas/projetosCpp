#include <iostream>
#include "Aluno.h"

using namespace std;

/*
 * 
Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 
 * 
*/

Aluno::Aluno() {
}

Aluno::Aluno(const Aluno& orig) {
}

Aluno::~Aluno() {
}

void Aluno::leitura(){
    float nota1, nota2, nota3;
    
    cout << "Informe 3 notas, a 1 peso -- 2, 2 peso -- 3, 3 peso -- 5. " << endl;
    cin >> nota1 >> nota2 >> nota3;
    cout << "\nNota 1: " << nota1 << "\nNota 2: " << nota2 << "\nNota 3: " << nota3 << "\nMédia: " << this->calcular_media(nota1, nota2, nota3);
}

float Aluno::calcular_media(float nota1, float nota2, float nota3){
    return ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
}