# include <stdio.h>

/*
Criar um programa que tenha uma função ler3palavras.
Essa função deve ler tres palavras do usuario
e retornar as tres palavras. A função main deve imprimir
essas palavras

*/

void ler3palavras(char palavras[3][25]);

int main (){

  int i;
  char palavras[3][25];
  
  
  ler3palavras(palavras);
  
  for (i=0; i<3; i++){
    printf("palavas  na posicao %d  :%s\n",i+1,palavras[i]);
  }
  return 0;
}

void ler3palavras(char palavras[3][25]){
  int i;
  
  for (i=0; i<3; i++)
  {
     printf("Digite a palavra:%d ", i+1);
     scanf("%25[^\n]",palavras[i]);
     scanf("%c");
  }
}
