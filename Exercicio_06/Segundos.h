#ifndef SEGUNDOS_H
#define SEGUNDOS_H

class Segundos {
public:
    
    Segundos();
    Segundos(const Segundos& orig);
    virtual ~Segundos();
    
    void leitura();
    int calcular_horas(int segundos);
    int calcular_minutos(int segundos);
    int calcular_segundos(int segundos);
    
private:

};

#endif 