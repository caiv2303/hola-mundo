#include <iostream>
#include <Mascota.hpp>
using namespace std;
int main(int argc, char const *argv[])
{
    Mascota m1;
    Mascota m2;
    Mascota m3;
    m1.Comer();
    m2.Comer();
    m3.Comer();
    cout<<"Mascota "<<m1.LeerEnergia<<endl; 
    return 0;
}
