#include <stdio.h>

main (){

    float real, cotadolar, conversao;

    printf("Informe o valor em Real a ser convertido: ");
    scanf ("%f", &real);
    printf("Informe a cotacao atual do Dolar: ");
    scanf ("%f", &cotadolar);

    conversao = real/cotadolar;

    printf("Valor a ser convertido: %.2f \n Cotacao do dolar hoje: %.2f \n Resultado da conversao: %.2f", real, cotadolar, conversao);

    return 0;
}