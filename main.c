#include <stdio.h>
#include "conjunto.h"

int main()
{
    CONJUNTO c,d,e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacio %d\n", es_vacio(c));
    c=agregar(c,2);
    c=agregar(c,5);
    c=agregar(c,18);
    c=agregar(c,15);
    print_conjunto(c);

    d=agregar(d,15);
    d=agregar(d,121);
    d=agregar(d,13);
    d=agregar(d,11);
    print_conjunto(d);

    e=Union(c,d);
    print_conjunto(e);
}