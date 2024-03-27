#include <stdio.h>

main (){

    int v1,v2,v3,f;

    printf("Informe o primeiro valor: ");
    scanf ("%ld", &v1);
    printf("Informe o segundo valor: ");
    scanf ("%ld", &v2);
    printf("Informe o terceiro valor: ");
    scanf ("%ld", &v3);

    f = (v1*v1)+(v2*v2)+(v3*v3);

    printf("Seu resultado e: %d", f);
    
    return 0;
}