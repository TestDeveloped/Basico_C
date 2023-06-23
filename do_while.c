#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int fat, n,i;
    fat=1;
    i=1;
    do{
        printf("Digite um número: ");
        scanf("%i",&n);
    } while (n<0);
    while (i<=n){
        fat=fat*i;
        i++;
    }
    printf("Resultado: %i! =%i",n,fat);
    return 0;
}