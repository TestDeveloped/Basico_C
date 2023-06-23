/* SEU NOME */
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[10];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Olá, %s!\n",nome);
    return 0;
}
