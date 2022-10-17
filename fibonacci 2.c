#include <stdio.h>

int main (){
    int frequencia, i, num;

    unsigned long long int f[61];
    f[0] = 0;
    f[1] = 1;

    for (i=2; i < 61; i++){
        f[i] = f[i-1] + f[i-2];
    }
    scanf("%d", &frequencia);
    for (i=0; i < frequencia; i++){
        scanf("%d", &num);
        printf("Fib[%d] = %llu\n", num, f[num]);
    }
    return 0;
}
