#include <stdio.h>
#include <math.h>

typedef struct 
{
    double real;
    double imag;
} Complejo;

Complejo CrearComplejo(double real, double imag) // Constructor
{
    Complejo c;
    c.real = real;
    c.imag = imag;
    return c;
}

void AsignaReal(Complejo* c, double real)// Operaciones 
{
    c->real = real;
}

void AsignaImaginaria(Complejo* c, double imag) 
{
    c->imag = imag;
}

double ParteReal(Complejo c) 
{
    return c.real;
}

double ParteImaginaria(Complejo c) 
{
    return c.imag;
}

double Modulo(Complejo c) 
{
    return sqrt(c.real * c.real + c.imag * c.imag);
}

Complejo Suma(Complejo c1, Complejo c2) 
{
    return CrearComplejo(c1.real + c2.real, c1.imag + c2.imag);
}


int main() // Prueba
{
    Complejo c1 = CrearComplejo(3, 4);
    Complejo c2 = CrearComplejo(1, 2);

    printf("Parte real de c1: %.2f\n", ParteReal(c1));
    printf("Parte imaginaria de c1: %.2f\n", ParteImaginaria(c1));
    printf("Modulo de c1: %.2f\n", Modulo(c1));

    Complejo suma = Suma(c1, c2);
    printf("Suma de c1 y c2: %.2f + %.2fi\n", suma.real, suma.imag);

    return 0;
}
