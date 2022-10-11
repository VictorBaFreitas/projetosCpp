#ifndef MEDIA_H
#define MEDIA_H

class Media {
public:
    
    Media();
    Media(const Media& orig);
    virtual ~Media();
    
    void leitura();
    float calcular_media(float nota1, float nota2, float nota3);
private:

};

#endif