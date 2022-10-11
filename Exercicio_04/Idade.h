#ifndef IDADE_H
#define IDADE_H

class Idade {
public:
    
    Idade();
    Idade(const Idade& orig);
    virtual ~Idade();
    
    void leitura();
    int calcular_anos(int idade);
    int calcular_meses(int idade);
    int calcular_dias(int idade);
    
private:

};

#endif 