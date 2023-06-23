/* LISTA DE ALUNOS */

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    char alunos[5][20];
    printf("Digite o nome de 5 alunos: \n");
    for ( i = 0; i < 5; i++){
        printf("%iº: ",i+1);
        gets(alunos[i]);
    }
    printf("\nLista de alunos: \n");
    for ( i = 0; i < 5; i++){
        printf("%iº: %s\n",i+1,alunos[i]);
    }
    return 0;
}
