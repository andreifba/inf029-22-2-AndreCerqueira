#include<stdio.h>
#include<locale.h>


/*3) Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for,
ela deve de alguma forma retornar para main que deu algum erro.
A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se é possível calcular o fatorial
*/

int fatorial (int n){
if (n==0) //|| n ==1)
    return 0;
if (n==1)
        return 1;
else{
    return n*fatorial(n-1);
}

}

int main(){
setlocale(LC_ALL, "portuguese");

int n;

printf("Digite um valor maior que zero: ");
scanf("%d",&n);
printf("Fatorial de %d é : %d\n",n,fatorial(n));

system ("pause");
return 0;
}