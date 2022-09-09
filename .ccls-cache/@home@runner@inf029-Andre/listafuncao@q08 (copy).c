#include    <stdio.h>


/*
8. Crie um programa que tenha uma função cadastrarCliente.
Essa função deve ler os dados do cliente (nome, dataNascimento,
cpf,sexo)e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/

typedef struct
{
    char nome[20];
    int dataNascimento;
    int cpf;
    char sexo[2];

}cadastro;

cadastro cadCliente(){
cadastro dadoscliente;
int i;
printf("Digite o nome: ");
scanf(" %s",dadoscliente.nome);
printf("Digite da data de Nascimento: ");
scanf("%d",&dadoscliente.dataNascimento);
printf("Digite o cpf:");
scanf("%d",&dadoscliente.cpf);
printf("Digite o sexo:'m' ou 'f'");
scanf("%s",dadoscliente.sexo);

return dadoscliente;

}


int main(){

cadastro cliente;
cliente = cadCliente();

printf("%s\n",cliente.nome);
printf("%d\n",cliente.dataNascimento);
printf("%d\n",cliente.cpf);
printf("%s\n",cliente.sexo);


return 0;
}
