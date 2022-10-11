#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
public:
    
    Aluno();
    Aluno(const Aluno& orig);
    virtual ~Aluno();
    
    void leitura();
    float calcular_media(float nota1, float nota2, float nota3);
    
private:

};

#endif 