/*          ###QUESTION###
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num){
    int i;
    for(i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return 0;
    return 1;
}

int main(){
    int i, lower, upper;
    long long sum = 5;
    for(i = 1; i <= 333333; i++){
        lower = 6*i - 1;
        upper = 6*i + 1;
        if(isPrime(lower))
            sum += lower;
        if(isPrime(upper))
            sum += upper;
    }
    printf("Sum of the primes below 2000000 is %lld", sum);

    return 0;
}
