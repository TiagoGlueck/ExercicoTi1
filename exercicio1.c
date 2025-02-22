#include <stdio.h>
int main() 
{
    /*Exercicio1
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("%d", numero -1);*/

    /*Exercicio2
    float nota1,nota2,nota3,nota4;
    printf("Digite suas quatro notas\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);
    printf("A media das suas quatro notas são de: %f", (nota1+nota2+nota3+nota4)/4);*/

    /*Exercicio3
    float valor1,valor2;
    printf("Digite dois numeros\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    printf("A soma e de: %f \n", (valor1+valor2));
    printf("O produto e de: %f \n", (valor1*valor2));
    printf("A diferenca e de: %f \n", (valor1-valor2));
    printf("O quociente e de: %f \n", (valor1/valor2));*/

    /*Exercicio4*/
    float fare;
    printf("Insira quantos graus farenheit deseja converter para centigrados: \n");
    scanf("%f", &fare);
    float c= (fare-32)*5/9;
    printf("A temperatura em centigrados e: %f\n", c);

    


    return 0;
}
