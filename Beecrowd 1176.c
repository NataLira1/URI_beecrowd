#include <stdio.h>

long long int fibonacci(long long int num);

int main (){
    int i, frequencia;
    scanf("%d",&frequencia);

    if (frequencia >= 0 && frequencia < 61){
        for (i=0; i < frequencia ; i++){
            long long int valorF, num;
            scanf("%lld",&num);
            valorF = fibonacci(num);
            printf("Fib(%lld) = %lld\n", num, valorF);
        }
    }
    return 0;
}

long long int fibonacci(long long int num){
    if (num == 0 || num == 1){
        return num;
    }
    else{
        return fibonacci (num-1) + fibonacci(num-2);
    }
}
