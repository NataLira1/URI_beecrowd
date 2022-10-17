#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, tentativa, sn = 0;
    while (sn != 1){
        num = 1+(rand() % 1000);
        printf("%d\n", num);

        printf("Eu tenho um numero entre 1 e 1000.\n");
        printf("Voce consegue descobrir qual e?\n");
        printf("Digite sua primeira tentativa.\n");

        scanf("%d",&tentativa);

        if (tentativa == num){
            char novamente[1];

            printf("Excelente! Voce descobriu o numero!\nGostaria de jogar novamente (s ou n)?\n");
            scanf("%s",novamente);

            //while(novamente != "s" || novamente != "n"){
            //    printf("Erro! Digite novamente:\n");
            //    scanf("%s",novamente);
            //}
            if(novamente == "s"){
                sn = 0;
            }
            else if(novamente == "n"){

            }
        }
        while (tentativa != num){
            if (tentativa > num){
                printf("Muito alto. Tente novamente.\n");
                scanf("%d", &tentativa);
            }else{
                printf("Muito baixo. Tente novamente.\n");
                scanf("%d", &tentativa);
            }
        }
    }
    return 0;
}

