#pragma once
class Mascota
{
private:
    int Felicidad;
    int Energia;

public:
    Mascota() {}
    ~Mascota() {}
    void Comer(){
        this->Energia+=1;
    }
    void LeerEnergia(){
        this->Energia;
    }
};