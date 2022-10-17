#include <stdio.h>

typedef struct{
    char nome[21];
    char sinal;
}papainoel;

int comparacao(char,char);

int main(){
    int quantnomes;
    int comportado = 0, malcomportado = 0;
    int contador;

    scanf(" %d",&quantnomes);

    papainoel crianca[quantnomes], aux;

    //Atribuição do sinal e do nome
    for (contador = 0; contador < quantnomes; contador++){
        scanf(" %c %s",&crianca[contador].sinal, crianca[contador].nome);

        if (crianca[contador].sinal == '+'){
            comportado++;
        }
        else{
            malcomportado++;
        }
    }

    int i,j;
    for (i = 1; i < quantnomes; i++) {
        for (j = 0; j < quantnomes - i; j++){
            if(compara(crianca[j].nome, crianca[j+1].nome) > 0){
                aux = crianca[j];
                crianca[j] = crianca[j+1];
                crianca[j+1] = aux;
            }
        }
    }

    for(int b = 0; b < quantnomes; b++){
        printf("%s\n", crianca[b].nome);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", comportado, malcomportado);

    return 0;
}

int compara(char string1[],char string2[]){
    int cont;
    for (cont=0; string1[cont] != '\0' && string2[cont] != '\0'; cont++) {
        if (string1[cont] < string2[cont]){
            return -1;
       }
        else if(string1[cont] > string2[cont]){
            return 1;
        }
    }
}
