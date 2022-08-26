#include <stdio.h>
#include <locale.h>
#define tam 2

/*
01. Crie um programa que tenha uma função soma e a função main.
    A função main deve ler dois valores, enviar para a função soma.
    A função soma deve realizar a soma e retornar o valor. A função
    main deve imprimir o resultado da soma.
 */


 int soma(int a, int b)
 {
     int soma;
     soma = a+b;
     return soma;

 }

 int main(){
 setlocale(LC_ALL, "portuguese");

 int resultado, a, b;

 printf("Digite o primeiro valor: ");
 scanf("%d",&a);
 printf("Digite o segundo valor: ");
 scanf("%d",&b);

 resultado = soma(a,b);
 printf("O Total da Soma é: %d\n",resultado);


system("pause");

 return 0;
 }
