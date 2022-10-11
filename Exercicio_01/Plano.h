#ifndef PLANO_H
#define PLANO_H

class Plano {
public:
    
    Plano();
    Plano(const Plano& orig);
    virtual ~Plano();
    
    void leitura();
    float calcular_distancia(int pontoX1, int pontoX2, int pontoY1, int pontoY2);
    
private:

};

#endif 