#include <stdio.h>
#include <ctype.h>

int main (){

    int ind_Linha,i,j;
    float matriz[12][12], soma1, soma2, media;
    char T[2];
        scanf("%d", &ind_Linha);
        if(ind_Linha >= 0 && ind_Linha <= 11){
            scanf("%s",&T[0]);
            if(isupper(T[0])){
                for (i = 0; i < 12; i++){
                    for(j = 0; j < 12; j++){
                        scanf("%f",&matriz[i][j]);
                    }
                }
                if (T[0] == 'M'){
                    for(int k = 0; k < 12; k++){
                        soma1 +=  matriz[ind_Linha][k];
                    }
                    media = soma1/12;
                    printf("%.1f", media);
                }
                else if(T[0] == 'S'){
                    for(int l = 0; l < 12; l++){
                        soma2 +=  matriz[ind_Linha][l];
                    }
                    printf("%.1f", soma2);
                }
            }else{
                printf("Letra nao e maiuscula\n");
            }
        }else{
            printf("Indicacao da Linha invalida\n");
        }
    return 0;
}
