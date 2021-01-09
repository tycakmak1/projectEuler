/*          ###QUESTION###
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284.
The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.*/
#include <stdio.h>
#include <stdlib.h>

int sumOfDivisors(int num){
    int sum = 1;
    for(int i = 2; i <= num / 2; i++)
        if(num % i == 0)
            sum += i;
    return sum;
}

int main(){
    int sum = 0, b;

    for(int a = 6; a < 10000; a++){
        b = sumOfDivisors(a);
        if((a == sumOfDivisors(b)) && (b < 10000) && (a != b))
            sum += a;
    }

    printf("%d", sum);
    return 0;
}
