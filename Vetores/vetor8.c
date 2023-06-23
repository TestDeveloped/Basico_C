/* MEDIA ARITMÉTICA */
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float x,m;
    int i,n;
    m=0;
    printf("Digite a quantidade de valores a serem fornecidos: ");
    scanf("%i",&n);
    for ( i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%f",&x);
        m=m+x;
    }
    m=m/n;
    printf("A média aritmética é: %.1f",m);
    return 0;
}
