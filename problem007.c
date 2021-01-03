#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int x){
    int i;
    for(i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
            return 0;
    return 1;
}

int main(){
    int i, prime, count = 1;
    for(i = 2; count < 10002; i++)
        if(isPrime(i)){
            prime = i;
            count ++;
        }

    printf("The 10001st prime is %d", prime);
    return 0;
}
