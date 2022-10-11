#ifndef MULTIPLOS_H
#define MULTIPLOS_H

class Multiplos {
public:
    
    Multiplos();
    Multiplos(const Multiplos& orig);
    virtual ~Multiplos();
    
    void leitura();
    int calcular_multiplos(int numero1, int numero2);
    
private:

};

#endif 