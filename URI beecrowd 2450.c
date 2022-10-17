#include <stdio.h>

int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    int i, j, a, b;
    int matriz[N][M];
    int coluna = 0, linha = 0;
    int lsoma, csoma;
    int contador1, contador2;
    int soma ,somaC[M], quantzero[N];
    int condicaocoluna, condicaozero;

    // Inserindo matriz

    for (i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    //Processo para as condições

    for(linha; linha < N; linha++){
        quantzero[linha] = 0;
        for(coluna; coluna < M; coluna++){
            if(matriz[linha][coluna] != 0){
                for(csoma = 0; csoma <= coluna; csoma++){
                    for(lsoma = linha + 1; lsoma < N; lsoma++){
                        somaC[csoma] += matriz[lsoma][csoma];
                    }
                //csoma = coluna + 1;
                }

                printf("Soma C[%d] = %d\n", csoma, somaC[csoma]);
            }
            else{
                quantzero[linha]++;
            }
        }
    }

    //Condições coluna
    for(contador1 = 0; contador1 < M; contador1++){
        condicaocoluna = 1;
        if(somaC[contador1] != 0){
            condicaocoluna = 0;
        }
    }

    //Condições linhas
    for(contador2 = 1; contador2 < N; contador2++){
        condicaozero = 1;
        a = N;
        if (quantzero[contador2] != M){
            for(a; a > contador2+1; a--){
                if(quantzero[a] != M){
                    condicaozero = 0;
                }
            }
        }
    }

    //Verificações condições
    if(condicaozero == 1 && condicaocoluna == 1){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}
