#include "TestaEsfera.h"

int main(){
    TestaEsfera *Obj = new TestaEsfera;
    Obj->menu();
    Obj->~TestaEsfera();
    return 0;
}