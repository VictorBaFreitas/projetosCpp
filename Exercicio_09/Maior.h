#ifndef MAIOR_H
#define MAIOR_H

class Maior {
public:
    
    Maior();
    Maior(const Maior& orig);
    virtual ~Maior();
    
    void leitura();
    int calcular_maior(int numero1, int numero2, int numero3);
    
private:

};

#endif