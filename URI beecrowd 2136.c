#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

 typedef struct{
    char nome[50];
    char situacao[4];
}Pessoa;

int compara(const void *, const void *);

int main(){
    Pessoa pessoa[1000];
    char esc[50];
    int i = 0, a, escolha, cont;
    /*Ler o nome e a situação*/
    while(scanf("%s %s", pessoa[i].nome, pessoa[i].situacao) && strcmp(pessoa[i].nome, "FIM") != 0){
        i++;
    }
    /*Critério para escolha*/
    for(a =escolha = 0; a < i; a++){
        if(!strcmp(pessoa[escolha].situacao, "YES")){
            if(!strcmp(pessoa[a+1].situacao, "YES") && strlen(pessoa[escolha].nome) < strlen(pessoa[a+1].nome)){
                escolha = a+1;
            }
        }
        else{
            escolha++;
            a++;
        }
    }
    /*Armazena o resultado em um vetor*/
    strcpy(esc, pessoa[escolha].nome);

    /*Ordena a lista de amigos*/
    qsort(pessoa, i, sizeof(Pessoa), compara);

    printf("%s\n",pessoa[0].nome);

    /*Imprime os nomes*/
    for(cont = 1; cont < i; cont++){
        if(strcmp(pessoa[cont].nome, pessoa[cont-1].nome)){
            printf("%s\n",pessoa[cont].nome);
        }
    }
    printf("\nAmigo do Habay:\n%s\n", esc);

    return 0;
}

int compara(const void *p1, const void *p2){
 Pessoa *i = (Pessoa *) p1, *j = (Pessoa *) p2;

    if(strcmp(j->situacao, i->situacao) == 0)
        return strcmp(i->nome, j->nome);
    else
        return strcmp(j->situacao, i->situacao);
}
