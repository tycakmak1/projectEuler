#include <stdio.h>
#include <stdlib.h>

void fibonacci(int* x, int* y){
    *y = *x + *y;
    *x = *y - *x;
}

int main(){
    int a = 1, b = 1, sum  = 0;
    while(b <= 4000000){
        fibonacci(&a, &b);
        if(b%2 == 0)
            sum += b;
    }
    printf("%d", sum);
    return 0;

}
