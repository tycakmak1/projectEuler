#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, sumOfSquares = 0, squareOfSum = 0;

    for(i = 1; i < 101; i++){
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    printf("Difference between the sum of squares and the square of sum is %d",squareOfSum - sumOfSquares);
    return 0;
}
