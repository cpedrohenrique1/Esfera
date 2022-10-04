#ifndef TESTAESFERA_H_
#define TESTAESFERA_H_
#include <iostream>
using namespace std;
#include "Esfera.h"
class TestaEsfera{
    private:
        Esfera *Objeto = new Esfera;
    public:
        TestaEsfera();
        ~TestaEsfera();
        void menu();
};

TestaEsfera::TestaEsfera(){
}

TestaEsfera::~TestaEsfera(){
    delete Objeto;
}

void TestaEsfera::menu(){
    int flag;
    double entrada;
    do{
        do{
            cout << "Insira Raio: ";
            cin >> entrada;
        }while(Objeto->setRaio(entrada) == false);
        cout << "Area total: " << Objeto->Area() << "\n";
        cout << "Volume: " << Objeto->Volume() << "\n";
        cout << "Digite 0 para parar o programa: ";
        cin >> flag;
    }while (flag != 0);
}

#endif