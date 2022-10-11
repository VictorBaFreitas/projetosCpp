#ifndef CUSTO_H
#define CUSTO_H

class Custo {
public:
    
    Custo();
    Custo(const Custo& orig);
    virtual ~Custo();
    
    void leitura();
    float calcular_valorConsumidor(float valor_fabrica);
    
private:

};

#endif 