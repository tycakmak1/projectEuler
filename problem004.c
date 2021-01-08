/*          ###QUESTION###
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <stdio.h>
#include <stdlib.h>

int isPalindrome(long long a){
    long long b = a, c = 0;
    while(b > 0){
        c = 10 * c + b%10;
        b /= 10;
    }
    if(c != a)
        return 0;
    return 1;

}

int main(){
    int factor1, factor2;
    long long largestPalindrome = 0, product;
    for(factor1 = 100; factor1 < 1000; factor1++){
        for(factor2 = factor1; factor2 < 1000; factor2++){
            product = factor1 * factor2;
            if(isPalindrome(product) && largestPalindrome < product)
                largestPalindrome = product;
        }
    }

    printf("The largest palindrome made from the product of 3-digit numbers is %lld", largestPalindrome);

    return 0;
}
