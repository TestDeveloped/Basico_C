/* Fahrenheit para Celsius */
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float f,c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("A temperatura em Celsius é: %.1f",c);
    return 0;
}