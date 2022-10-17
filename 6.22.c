#include <stdio.h>

int main (){

    int produtos, vendedores;
    float valor[5][4];
    float vp;
    float vv1 = 0, vv2 = 0, vv3 = 0, vv4 = 0;

    for(produtos = 0; produtos < 5; produtos++){
        for(vendedores = 0;vendedores < 4; vendedores++){
            printf("Digite o valor arrecadado do produto %d pelo vendedor %d no mes passado:\n", produtos + 1, vendedores+1);
            scanf("%f",&valor[produtos][vendedores]);
            if(valor[produtos][vendedores] < 0){
                while (valor[produtos][vendedores] < 0){
                    printf("Valor invalido. Digite novamnete\n");
                    scanf("%f",&valor[produtos][vendedores]);
                }
            }
        }
    }


    for(produtos = 0; produtos < 5; produtos++){
        vp=0;
        for(vendedores = 0;vendedores < 4; vendedores++){
            printf("%.1f\t ",valor[produtos][vendedores]);
            vp += valor[produtos][vendedores];
            if (vendedores == 0){
                vv1 += valor[produtos][0];
            }else if (vendedores == 1){
                vv2 += valor[produtos][1];
            }else if (vendedores == 2){
                vv3 += valor[produtos][2];
            }else{
                vv4 += valor[produtos][3];
            }
        }
        printf("%.1f\n", vp);
    }
    printf ("%.1f\t %.1f\t %.1f\t %.1f\t",vv1,vv2,vv3,vv4);
    return 0;
}
