#include <stdio.h>

main (){

    int v1,v2,r1,r2,r3,r4;

    printf("Informe o primeiro valor: ");
    scanf ("%ld", &v1);
    printf("Informe o segundo valor: ");
    scanf ("%ld", &v2);

    r1 = v1+v2;
    r2 = v1-v2;
    r3 = v1*v2;
    r4 = v1/v2;

    printf("O resultado das quatro operacoes e: \n Soma = %d \n Subtracao: %d \n Multiplicacao: %d \n Divisao: %d", r1, r2, r3, r4);
    
    return 0;
}