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
