#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    printf("****TELE ATENDIMENTO****");
    printf("1-Consultar saldo");
    printf("2-Planos e promoções");
    printf("3-Falar com atendente");
    printf("************************");
    printf("Digite uma opção: ");
    scanf("%i",&opcao);
    switch (opcao){
    case 1:
        printf("você selecionou a opção 1");
        break;
    case 2:
        printf("você selecionou a opção 2");
        break;
    case 3:
        printf("você selecionou a opção 3");
        break;
    default:
        printf("Opção inválida!");
        break;
    }
    return 0;
}