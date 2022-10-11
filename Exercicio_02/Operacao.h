#ifndef OPERACAO_H
#define OPERACAO_H

class Operacao {
public:
    
    Operacao();
    Operacao(const Operacao& orig);
    virtual ~Operacao();
    
    void leitura();
    int calcular(int numero1, int numero2, int numero3);
    
private:

};

#endif 