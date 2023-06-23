/* Se eu tiver pelo menos R$ 10,00, então vou ao cinema, 
senão, vou ficar em casa. */
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float d;
    printf("Você tem quantos reais?");
    scanf("%f",&d);
    if (d>=10){
        printf("vou ao cinema!");
    }
    else{
        printf("vou ficar em casa!");
    }
    return 0;
}