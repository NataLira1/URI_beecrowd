#include <stdio.h>

int main(){
    int i,num, m[100], pv[100], situacao=1;
    scanf("%d",&num);
    for (i = 0; i < num; i++){
        //Atribuição de valores
        scanf("%d",&m[i]);
        //Atribuição de 0 para vale e 1 para pico
        // vale
    }
    if (num >= 2){
        if (m[0] > m[1]){
            pv[0] = 1;
            pv[1] = 0;
        }
        else if (m[0] < m[1]){
            pv[0] = 0;
            pv[1] = 1;
        }else{
            situacao = 0;
            printf("%d\n",situacao);
            return 0;
        }
    }

    for(i=2;i < num; i++){

        if (m[i] < m[i-1]){
            pv[i-1] = 1;
        //pico
        }else if(m[i] > m[i-1]){
            pv[i-1] = 0;
        //valores iguais
        }else{
            situacao = 0;
            printf("%d\n", situacao);
            return 0;
        }
    }
    int h;
    for (h=0; h < num -2 ; h++){

        if (pv[h] == pv[h+1]){;
            situacao = 0;
            printf("%d\n", situacao);
            return 0;
        }
    }

    printf("%d\n", situacao);
    return 0;
}
