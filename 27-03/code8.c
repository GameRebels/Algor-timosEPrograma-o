#include <stdio.h>

main (){

    int idade, idadeD, idadeT;

    printf("Informe a sua idade: ");
    scanf ("%d", &idade);

    idadeD = idade*2;
    idadeT = idade*3;

    printf("O dobro da sua idade e: %d \n O triplo da sua idade e: %d", idadeD, idadeT);

    return 0;
}