# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
//Evoluir o programa anterior para ler também o nome das 
//pessoas e imprimir o nome e a idade de todos que forem 
//maior que a média.
//definiçao da constante
#define tam 2

// definicção de estruct
typedef struct
{
char nome [20];
int idade;
}pessoa;


int main(){

setlocale(LC_ALL, "portuguese");
//definição das variaveis 
int i,media = 0;
pessoa pessoa[tam];

for (i =0; i <tam; i++ )
    {
    printf("Digite o %dº Nome:  ",i+1);
    fgets(pessoa[i].nome, 19,stdin);
    printf("Digite a idade: ");
    scanf("%d",&pessoa[i].idade);
    scanf("%*c");
    }

for ( i = 0; i<tam; i++)
    {
        media +=pessoa[i].idade/tam;
    }

for (i =0; i <tam; i++ )
    {
    if (pessoa[i].idade>media)
      {
       printf("\n");
       printf("%s%d",pessoa[i].nome, pessoa[i].idade);
       }
    }

return 0;
}
