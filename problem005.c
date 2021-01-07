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
