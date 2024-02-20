#pragma once
#include <Alimento.hpp>
class Mascota
{
private:
    int Felicidad;
    int Energia;

public:
    Mascota() {}
    ~Mascota() {}
    void Comer(Alimento alimento){
        this->Energia+=alimento.ExtraerEnergia;
    }
    void LeerEnergia(){
        this->Energia;
    }
};