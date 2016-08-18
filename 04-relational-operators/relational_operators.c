#include <stdio.h>

int main() {

    /* Relational Operators 
     
        ==  Checks if the values of two operands are equal or not. If yes, then the condition becomes true.     (A == B) is not true.
        !=  Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.    (A != B) is true.
        >   Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.    (A > B) is not true.
        <   Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.   (A < B) is true.
        >=  Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.    (A >= B) is not true.
        <=  Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.   (A <= B) is true.
     */

    int a, b;

    a = 1;
    b = 3;

    if (a == b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a != b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a > b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a < b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a != b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a >= b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    if (a <= b) {
        printf("Result: %d \n", a);
    } else {
        printf("Result: %d \n", b);
    }

    return 0;
}

