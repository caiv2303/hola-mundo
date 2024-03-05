#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
#include <list>
using namespace std;

int main (int argc, char const *argv[])
{

    list<Dibujo> dibujos;

    Dibujo dibujo1("./assets/Diesel.txt");
    dibujo1.Dibujar();

    Dibujo dibujo2("./assets/Max.txt");
    dibujo2.Dibujar();

    // dibujos.push_front(dibujo1);
    // dibujos.push_front(dibujo2);

    Mascota m1,m2,m3;

    list<Mascota> mascotas;
    mascotas.push_front(m1);
    mascotas.push_front(m2);
    mascotas.push_front(m3);

    Alimento alimento(5);
    
    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
    }

    for (auto &&mascotaActual : mascotas)
    {
        cout<<"Mascota "<<mascotaActual.LeerEnergia()<<endl; 
    }


}