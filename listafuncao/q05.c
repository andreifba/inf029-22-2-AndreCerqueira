# include <stdio.h>

/*
Crie um programa que tenha uma função ler4Numeros.
Essa função deve ler quatro números do usuario
e retornar os quatro números. A função main deve
imprimir esses quatro números. Utilize struct para fazer o retorno.
*/

typedef struct
  {
  int a, b, c, d;

  }numeros;

numeros ler4Numeros(){
  numeros n;
  printf("Digite o primeiro numero:");
  scanf("%d",&n.a);
  printf("Digite o segundo numero:");
  scanf("%d",&n.b);
  printf("Digite o terceiro numero:");
  scanf("%d",&n.c);
  printf("Digite o quarto numero:");
  scanf("%d",&n.d);
  return n;
}

int main ()
  {
    numeros n;

    n =ler4Numeros();
      printf("%d%d%d%d",n.a,n.b,n.c,n.d);

     return 0;
  }

