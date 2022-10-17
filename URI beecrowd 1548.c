#include <stdio.h>

void comparacaoMaior(int *notas, int quantAlunos);

int main(){

    int quantTestes, contadorTeste, quantAlunos;
    int avaliacao;

    scanf("%d", &quantTestes);

    int semMexer[quantTestes];

    for(contadorTeste = 0; contadorTeste < quantTestes; contadorTeste++){
        scanf("%d", &quantAlunos);
        int notas[quantAlunos];
        int notas2[quantAlunos];

        for(int contador = 0; contador < quantAlunos; contador++){
            scanf("%d", &avaliacao);
            notas[contador] = avaliacao;
            notas2[contador] = avaliacao;
        }

        comparacaoMaior(notas, quantAlunos);

        int acumulador = 0;

        for(int h = 0; h < quantAlunos; h++){
            //printf("%d ", notas[h]);
            if(notas[h] == notas2[h]){
                acumulador++;
            }
        }
        semMexer[contadorTeste] = acumulador;
    }

    for(int x = 0; x < quantTestes; x++){
        printf("%d\n", semMexer[x]);
    }
    return 0;
}

void comparacaoMaior (int *notas,int quantAlunos) {
  int i, j, max, aux;

  for (i = 0; i < (quantAlunos - 1); i++) {
    max = i;
    for (j = i+1; j < quantAlunos; j++) {
      if (notas[j] > notas[max]) {
        max = j;
      }
    }
    if (i != max) {
      aux = notas[i];
      notas[i] = notas[max];
      notas[max] = aux;
    }
  }
}
