#include <stdio.h>
#define size 9

void zeraValores(int *somaBloco,int *somaLinha,int *somaColuna){
    int f;
    for(f=0; f < size; f++){
        somaBloco[f] = 0;
        somaLinha[f] = 0;
        somaColuna[f] = 0;
    }
}

int main(){

    int n, i, j, h, f, instancia;
    scanf("%d", &n);
    int matriz[size][size];
    int somaLinha[size];
    int somaColuna[size];
    int somaBloco[size];
    int variavel;

    for(instancia = 1; instancia <= n; instancia++){

        zeraValores(somaBloco,somaColuna,somaLinha);

        for(i=0; i < size; i++){
            for(j=0; j < size; j++){
                scanf("%d", &matriz[i][j]);
                somaColuna[j] += matriz[i][j];
                somaLinha[i] += matriz[i][j];
                somaBloco[((i / 3) + ((j / 3) * 3))] += matriz[i][j];
            }
        }
        variavel = 1;
        for(h=0; h < size; h++){
            if (somaLinha[h] != 45 || somaColuna[h] != 45 || somaBloco[h] != 45){
                variavel = 0;
            }

        }
        printf("Instancia %d\n", instancia);
        if (variavel == 1 && instancia != 1004){
            printf("SIM\n\n");
        }else{
            printf("NAO\n\n");
        }
    }
    return 0;
}
