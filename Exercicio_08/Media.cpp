#include <iostream>
#include "Media.h"

using namespace std;

/*
 * 
Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média,
uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem
"reprovado", caso contrário.
 *  
*/

Media::Media() {
}

Media::Media(const Media& orig) {
}

Media::~Media() {
}

void Media::leitura(){
    float nota1, nota2, nota3;
    
    cout << "Informe 3 notas para fazer a média: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    
    cout << "\nNOTA 1: " << nota1 << "\nNOTA 2: " << nota2 << "\nNOTA 3: " << nota3 << "\nMÉDIA: " << this->calcular_media(nota1, nota2, nota3);
    
    if (this->calcular_media(nota1, nota2, nota3) >= 6)
        cout << "\nSITUAÇÃO: APROVADO! " << endl;
    else 
        cout << "\nSITUAÇÃO: REPROVADO! " << endl;
}

float Media::calcular_media(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3;
}