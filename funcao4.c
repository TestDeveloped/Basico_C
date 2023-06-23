#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float n;
    printf("Digite um número: ");
    scanf("%f",&n);
    printf("Raiz quadrada de %.1f=%.1f",n,sqrt(n));
    return 0;
}