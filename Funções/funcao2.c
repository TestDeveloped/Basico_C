#include <stdio.h>
#include <locale.h>

void fatorial (int n);
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i",&n);
    if(n>=0){
        fatorial(n);
    }
    else{
        printf("Não existe fatorial de número negativo.");
    }
    return 0;
}
void fatorial(int n){
    int fat,i;
    fat=1;
    for(i=1;i<=n;i++){
        fat=fat*i;
    }
    printf("Resultado: %i!=%i",n,fat);
}