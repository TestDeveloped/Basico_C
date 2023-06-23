#include <stdio.h>
#include <locale.h>

int g=3;
void variaveis(int p);
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n=80;
    variaveis(n);
    return 0;
}
void variaveis(int p){
    int l=12;
    printf("Global=%i\n",g);
    printf("Local=%i\n",l);
    printf("Parâmetro=%i\n",p);

}