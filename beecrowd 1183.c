#include <stdio.h>
#include <ctype.h>

int main(){

    char O[2];
    float matriz[12][12], soma = 0, media = 0;

    scanf("%s", &O[0]);

    if (isupper(O[0])){
        for(int linha = 0; linha < 12; linha++){
            for(int coluna = 0; coluna < 12; coluna++){
                scanf("%f",&matriz[linha][coluna]);
                if (linha < coluna){
                    soma += matriz[linha][coluna];
                }
            }
        }
        if (O[0] == 'S'){
            printf("%.1f\n", soma);
        }
        else if (O[0] == 'M'){
            media = soma/66;
            printf("%.1f\n", media);
        }
    }else{
        printf("Letra nao e maiucula\n");
    }

    return 0;
}
