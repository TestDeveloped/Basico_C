#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int fat, n,i;
    fat=1;
    do{
        printf("Digite um número: ");
        scanf("%i",&n);
    } while (n<0);
    for ( i = 1; i <= n; i++){
        fat=fat*i;
    }
    printf("Resultado: %i!=%i",n,fat);
    return 0;
}