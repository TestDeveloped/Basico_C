/* Se eu tiver pelo menos R$ 100,00, então vou jantar fora, 
senão, se eu tiver pelo menos R$ 10,00, então vou ao 
cinema, senão, vou ficar em casa */
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float d;
    printf("Você tem quantos reais?");
    scanf("%f",&d);
    if(d>=100){
        printf("Vou jantar fora!");
    }
    else{
        if(d>=10){
            printf("vou ao cinema!");
        }
        else{
            printf("Vou ficar em casa!");
        }
    }
}