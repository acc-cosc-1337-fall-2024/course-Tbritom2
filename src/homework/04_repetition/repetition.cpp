//add include statements
#include "repetition.h"
//add function(s) code here
#include "repetition.h"

int factorial(int num) {
    int result = 1;
    while (num > 0) {
        result *= num;
        num--;
    }
    return result;
}

int gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 < num2)
            num2 -= num1;
        else
            num1 -= num2;
    }
    return num1;
}