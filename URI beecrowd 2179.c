#include <stdio.h>
/*  F indica linha
    C indica coluna
    N indica a ordem da matriz
*/
void funcaoVisitas(int , int, int);
void funcaoVisitasUltima(int , int , int);
int N, C, F;
int passo = 0;
int casasVisitadas = 0;
int casasPercorridas = 0;

void funcaoVisitas(int N, int F, int C){
    if(F >= 0 && F < N && C >= 0 && C < N){
        printf("%d ",((F*N)+(C+1)));
        casasVisitadas++;
    }
}

void funcaoVisitasUltima(int N, int F, int C){
    if(F >= 0 && F < N && C >= 0 && C < N){
        printf("%d\n",((F*N)+(C+1)));
        casasVisitadas++;
    }
}

int main(){
    scanf("%d", &N);
    scanf("%d%d", &F, &C);

    funcaoVisitas(N,F,C);
    casasPercorridas++;
    passo++;

    while (casasVisitadas < (N*N)){
        int j;
        if (passo % 2 != 0){
            for(j=0;j < passo; j++){
                if ((casasVisitadas < (N*N-1))){
                    C++;
                    casasPercorridas++;
                    funcaoVisitas(N,F,C);
                }else if(casasVisitadas == (N*N-1)){
                    C++;
                    casasPercorridas++;
                    funcaoVisitasUltima(N,F,C);
                }
            }
            for(j=0;j < passo; j++){
                if ((casasVisitadas < (N*N-1))){
                    F++;
                    casasPercorridas++;
                    funcaoVisitas(N,F,C);
                }else if(casasVisitadas == (N*N-1)){
                    F++;
                    casasPercorridas++;
                    funcaoVisitasUltima(N,F,C);
                }
            }
            passo++;
        }else{
            for(j=0;j < passo; j++){
                if ((casasVisitadas < (N*N-1))){
                    C--;
                    casasPercorridas++;
                    funcaoVisitas(N,F,C);
                }else if(casasVisitadas == (N*N-1)){
                    C--;
                    casasPercorridas++;
                    funcaoVisitasUltima(N,F,C);
                }
            }

            for(j=0;j < passo; j++){
                if ((casasVisitadas < (N*N-1))){
                    F--;
                    casasPercorridas++;
                    funcaoVisitas(N,F,C);
                }else if(casasVisitadas == (N*N-1)){
                    F--;
                    casasPercorridas++;
                    funcaoVisitasUltima(N,F,C);
                }
            }
        passo++;
        }
    }
    printf("%d\n",casasPercorridas);
    return 0;
}
