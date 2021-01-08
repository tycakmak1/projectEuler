/*          ###QUESTION###
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int collatzSequenceLength(long long num, int length){
    if(num == 1)
        return length;
    else if(num % 2 == 0){
        length++;
        return collatzSequenceLength(num / 2, length);
    }
    else{
        length += 2;
        return collatzSequenceLength((3 * num + 1) / 2, length);
    }
}

int main(){
    int length = 1, maxLength = 1;
    long long maxNumber = 13;
    for(long long i = 13; i < 1000000; i++){
        length = collatzSequenceLength(i, length);
        if(maxLength < length){
            maxNumber = i;
            maxLength = length;
        }
        length = 1;
    }

    printf("%lld", maxNumber);

    return 0;
}
