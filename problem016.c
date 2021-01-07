#include <stdio.h>
#include <stdlib.h>

int main(){
    int digits[303], sum = 0, twice;
    for(int i = 0; i < 302; i++)
        *(digits + i) = 0;
    digits[302] = 1;
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 303; j++){
            twice = *(digits + j) * 2;
                *(digits + j - 1) += twice / 10;
                *(digits + j) = twice % 10;
        }
    }
    for(int i = 0; i < 303; i++)
        sum += *(digits + i);


    printf("Sum of the digits of the number 2^1000 is %d", sum);

    return 0;
}
