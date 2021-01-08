/*          ###QUESTION###
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int greatestCommonDivisor(int a, int b){
    if(b == 0)
        return a;
    else{
        int temp = b;
        b = a % b;
        a = temp;
        return greatestCommonDivisor(a, b);
    }
}

int leastCommonMultiple(int a, int b){
    return (a * b) / greatestCommonDivisor(a, b);
}

int main(){
    int num = 3;
    for(int i = 2; i < 20; i++){
        num = leastCommonMultiple(num, i);
    }

    printf("%d", num);

    return 0;

}
