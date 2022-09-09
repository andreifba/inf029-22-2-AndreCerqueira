# include <stdio.h>

/*
Criar um programa que tenha uma função ler3letras.
Essa função deve ler tres letras do usuario
e retornar as tres letras. A função main deve imprimir
essas letras

*/

void ler3letras(char v[3]);

int main (){

  int i;
  char v[3];
  
  
  ler3letras(v);
  
  for (i=0; i<3; i++){
    printf("\n letra   :%c \n",v[i]);
  }
  return 0;
}

void ler3letras(char vet[3]){
  int i;
  
  for (i=0; i<3; i++)
  {
     printf("Digite a letra: ");
     scanf(" %c",&vet[i]);
  }
}
