/*          ###QUESTION###
The Fibonacci sequence is defined by the recurrence relation:

Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
Hence the first 12 terms will be:

F1 = 1
F2 = 1
F3 = 2
F4 = 3
F5 = 5
F6 = 8
F7 = 13
F8 = 21
F9 = 34
F10 = 55
F11 = 89
F12 = 144
The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?*/
#include <stdio.h>
#include <stdlib.h>

void fibonacciSequence(int a[], int b[]){
    int temp[1000];
    for(int i = 0; i < 1000; i++){
        *(temp + i) = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) += *(temp + i);
    }
    for(int i = 0; i < 1000; i++){
        *(b + 998 - i) += *(b + 999 - i) / 10;
        *(b + 999 - i) %= 10;
    }
}

int main(){
    int fib1[1000], fib2[1000], index = 2;
    for(int i = 0; i < 999; i++){
        *(fib1 + i) = 0;
        *(fib2 + i) = 0;
    }
    *(fib1 + 999) = 1;
    *(fib2 + 999) = 1;

    for(int i = 0; fib2[0] == 0; i++){
        fibonacciSequence(fib1, fib2);
        index++;
    }
    /*for(int i = 0; i < 1000; i++)
        printf("%d",*(fib2 + i))*/;
    printf("Index of the first term in the Fibonacci sequence to contain 1000 digits is %d", index);
    return 0;
}
