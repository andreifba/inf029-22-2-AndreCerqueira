# include <stdio.h>

/*
Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro
números do usuario e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.
*/

typedef struct
  {
  int a;
  int b;
  int c;
  int d;
  }numeros;

ler4Numeros( int numeros);

int main ()
  {
  


  

     return 0;
  }
  ler4Numeros( int numeros)
  {
    numeros numeros;

    printf("Digite os valores: ");
    scanf("%d",&numeros.a);
    printf("Digite os valores: ");
    scanf("%d",&numeros.b);
    printf("Digite os valores: ");
    scanf("%d",&numeros.c);
    printf("Digite os valores: ");
    scanf("%d",&numeros.b);

    
    
  }


