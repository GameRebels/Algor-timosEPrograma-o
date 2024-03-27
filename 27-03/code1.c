#include <stdio.h>

void main (){

    double altura,raio;

    printf("Informe a altura (h) do cilindro: ");
    scanf ("%lf", &altura);

    printf("Informe o raio(r) do cilindro: ");
    scanf ("%lf", &raio);

    double F = 3.14*raio*raio*altura;

    printf ("O volume do cilindro e: %.2lf.", F);
}