#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int fat, n,i;
    fat=1;
    i=1;
    printf("Digite um número: ");
    scanf("%i",&n);
    if (n>=0){
        while (i<=n){
            fat=fat*i;
            i++;
        }
        printf("Resultado: %i! =%i",n,fat);
    }
    else{
        printf("Não existe fatorial de número negativo");
    }
    return 0;
}