/*          ###QUESTION###
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float digitNumber = 0;
    int sum = 0;
    for(int i = 2; i < 101; i++)
        digitNumber += log(i)/log(10);
    digitNumber = ceil(digitNumber);
    int digits[(int)digitNumber];//digitNumber = 158

    for(int i = 0; i < digitNumber; i++)
        *(digits + i) = 0;
    *(digits + (int)digitNumber - 1) = 1;

    for(int i = 2; i < 101; i++){
        for(int j = 0; j < (int)digitNumber; j++)
            *(digits + j) *= i;
        for(int k = (int)digitNumber - 1; 0 < k; k--){
            *(digits + k - 1) += *(digits + k) / 10;
            *(digits + k) %= 10;
        }
    }

    for(int i = 0; i < (int)digitNumber; i++)
        sum += *(digits + i);
    printf("Sum of the digits of 100! is %d", sum);

    return 0;
}
