#include <stdio.h>
#include <locale.h>

int fatorial (int n);
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,r;
    printf("Digite um número: ");
    scanf("%i",&n);
    if(n>=0){
        r=fatorial(n);
        printf("Resultado: %i!=%i",n,r);
    }
    else{
        printf("Não existe fatorial de número negativo.");
    }
    return 0;
}
int fatorial(int n){
    int fat,i;
    fat=1;
    for(i=1;i<=n;i++){
        fat=fat*i;
    }
    return fat;
}