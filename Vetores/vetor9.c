/* CALCULO DA MEDIA ARITMETICA, É O CALCULO DA VARIÂNCIA */
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,t;
    printf("Digite a quantidade de valores a serem fornecidos: ");
    scanf("%i",&t);
    float med,var,v[t];
    med=0;
    var=0;
    for ( i = 0; i < t; i++){
        printf("Digite um número: ");
        scanf("%f",&v[i]);
        med=med+v[i];
    }
    med=med/t;
    for(i=0;i<t;i++){
        var=var+pow(v[i]-med,2);
    }
    printf("A média aritmética é: %.1f\nA variância é: %.1f",med,var);
    return 0;
}
