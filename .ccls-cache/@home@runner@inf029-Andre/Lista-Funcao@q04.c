# include <stdio.h>

/*
Crie um programa que tenha uma função  ler3Numeros. Essa função deve
ler três números do usuário e retornar os três números. A função main
deve imprimir esses três números. Utilize vetor para fazer o retorno.
*/

void ler3numeros(int n[3]);

int main (){

  int i;
  int n[3];
  
  
  ler3numeros(n);
  
  for (i=0; i<3; i++){
    printf("Os valores  sao :%d \n",n[i]);
  }
  return 0;
}

void ler3numeros(int vet[3]){
  int i;
  
  for (i=0; i<3; i++)
  {
     printf("Digite os valores: ");
     scanf("%d",&vet[i]);
  }
}
