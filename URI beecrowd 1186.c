
#include <stdio.h>
#include <ctype.h>

int main(){

    char O[2];
    float matriz[3][3], soma = 0, media = 0;

    scanf("%s", &O[0]);

    if (isupper(O[0])){
        for(int linha = 0; linha < 3; linha++){
            for(int coluna = 0; coluna < 3; coluna++){
                scanf("%f",&matriz[linha][coluna]);
            }
        }

        if (O[0] == 'S'){
            int h = 2;
            for(int i = 1; i < 3; i++){
                for(int j = 2; j >= h ; j--){
                    soma += matriz[i][j];
                    h--;
                }
            }
            printf("%.1f\n", soma);
        }
        else if (O[0] == 'M'){
            media = soma/3;
            printf("%.1f\n", media);
        }
    }else{
        printf("Letra nao e maiucula\n");
    }

    return 0;
}
