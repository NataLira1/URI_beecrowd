#include <stdio.h>

void comparacaoMenor(int * livro, int numLivros);

int main() {

    int numLivros;

    while(scanf("%d",&numLivros) != EOF){
        int a, y;
        int livro[numLivros], codigo;

        //scanf("%d", &numLivros);
        //Atribuição do valor ao vetor
        for(a = 0; a < numLivros; a++){
            scanf("%d",&codigo);
            livro[a] = codigo;
        }

        comparacaoMenor(livro, numLivros);

        for(y = 0; y < numLivros; y++){
            printf("%04d\n",livro[y]);
        }
    }
    return 0;
}

void comparacaoMenor(int *livro,int numLivros) {
    int i, j, min, aux;

    for (i = 0; i < (numLivros - 1); i++) {
        min = i;
        for (j = i+1; j < numLivros; j++) {
            if (livro[j] < livro[min]) {
            min = j;
            }
        }

        if (i != min) {
        aux = livro[i];
        livro[i] = livro[min];
        livro[min] = aux;
        }
      }
    }
