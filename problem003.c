/*          ###QUESTION###
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


bool isPrime(long long a){
    int i;
    for(i = 2; i <= sqrt(a); i++){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main(){
    long long num = 600851475143;
    int largestPrime, i;
    for(i = 2; i <= num; i++){
        if(isPrime(i)){
            while(num%i == 0){
                num /= i;
                largestPrime = i;
            }
        }

    }
    printf("%d", largestPrime);
    return 0;
}
