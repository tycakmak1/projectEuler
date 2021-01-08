/*          ###QUESTION###
A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:

1/2	= 	0.5
1/3	= 	0.(3)
1/4	= 	0.25
1/5	= 	0.2
1/6	= 	0.1(6)
1/7	= 	0.(142857)
1/8	= 	0.125
1/9	= 	0.(1)
1/10	= 	0.1
Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.

Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int value, maxLength = 0, counter, maxNumber, iteration;

    for(int i = 7; i < 1000; i++){
        counter = 0;
        value = 10 % i;
        iteration = 0;

        while(value != 1 && (iteration < 1000)){
            value *= 10;
            value %= i;
            counter++;
            iteration++;
        }

        if(maxLength < counter && (iteration < 999)){
            maxLength = counter;
            maxNumber = i;
        }
    }
    printf("Value of d, such that d < 1000 and 1/d contains the longest recurring cycle in its decimal fraction part is %d", maxNumber);

    return 0;
}
