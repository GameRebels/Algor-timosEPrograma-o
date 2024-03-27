#include <stdio.h>

void main (){

    int a,b,aux;

    printf("Informe um valor: ");
    scanf ("%ld", &a);
    printf("Informe outro valor: ");
    scanf ("%ld", &b);

    printf("Seus valores antes da troca sao: A = %d e B = %d", a, b);

    aux = b;
    b = a;
    a = aux;

    printf("\nSeus valores apos a troca sao: A = %d e B = %d", a, b);
}