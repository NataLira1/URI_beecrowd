 #include <stdio.h>

typedef struct{
    char nome[30];
    int valor;
    int anterior, proximo;
}Crianca;

int main(){
    int num;
    while (scanf("%d", &num) && num != 0) {
        int cont1, cont2;
        Crianca crianca[100];

        for (cont1 = 0; cont1 < num; ++cont1) {
            scanf("%s%d", crianca[cont1].nome, &crianca[cont1].valor);

            crianca[cont1].anterior = ((cont1 - 1) % num + num) % num;
            crianca[cont1].proximo = (cont1 + 1) % num;
        }

        cont1 = 0;
        while (num > 1) {
            int valor = crianca[cont1].valor;
            if (valor % 2) {
                for (cont2 = 0; cont2 < valor ; ++cont2)
                    cont1 = crianca[cont1].proximo;
            } else {
                for (cont2 = 0; cont2 < valor ; ++cont2)
                    cont1 = crianca[cont1].anterior;
            }

            crianca[crianca[cont1].anterior].proximo = crianca[cont1].proximo;
            crianca[crianca[cont1].proximo].anterior = crianca[cont1].anterior;

            --num;
        }
        cont1 = crianca[cont1].proximo;

        printf("Vencedor(a): %s\n", crianca[cont1].nome);
    }

    return 0;
}
