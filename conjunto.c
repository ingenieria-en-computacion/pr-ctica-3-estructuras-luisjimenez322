#include "conjunto.h"
#include  <stdio.h>

CONJUNTO conjunto_vacio()
{
    CONJUNTO c;
    c.cant=0;
    return c;

}
CONJUNTO agregar(CONJUNTO c, DATO d)
{
   CONJUNTO t=c; 
    if(!pertenece(t,d) && t.cant<TAM)
    {
        t.datos[t.cant]= d;
        t.cant++;
    }
    return t;
}

bool pertenece(CONJUNTO c, DATO d)
{
    if(!es_vacio(c)){
        for(int i=0;i < c.cant; i++)
        {
            if(c.datos[i]==d) return true;
        }
    }
    return false;
}
CONJUNTO quitar(CONJUNTO c,DATO d)
{
    CONJUNTO t = c;
    int i=0;
    if(pertenece(t,d))
    {
        for(;i<t.cant; i++)
        {
            if(t.datos[i]==d) break;
        }
        if (i !=t.cant-1)
        {
            for(int j=i+1; j<t.cant;j++)
            {
                t.datos[j-1]=t.datos[j];
            }
        }
        t.cant--;
    }
    return t;
}
bool es_vacio(CONJUNTO c)
{
    return c.cant ==0;
}

int cardinalidad(CONJUNTO c)
{
    return c.cant;
}

CONJUNTO Union(CONJUNTO c, CONJUNTO d)
{
    CONJUNTO t=c;
    for(int i=0; i<d.cant;i++)
    {
        t = agregar(t,d.datos[i]);
    }
    return t;
}
void print_conjunto(CONJUNTO c)
{
    printf("{ ");
    for(int i=0;i<c.cant;i++)
    {
        printf("%d",c.datos[i]);
    }
    printf("}\n");
}