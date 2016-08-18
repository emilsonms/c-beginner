#include <stdio.h>

int main() {

    /* Arithmetic Operators
     
        +   Adds two operands. 	A + B = 30
        −   Subtracts second operand from the first. A − B = -10
        *   Multiplies both operands. A * B = 200
        /   Divides numerator by de-numerator. B / A = 2
        %   Modulus Operator and remainder of after an integer division. B % A = 0
        ++  Increment operator increases the integer value by one. A++ = 11
        --  Decrement operator decreases the integer value by one. A-- = 9
     */

    int a, b, c, d;

    a = 3;
    b = a + 2;
    c = 2 * b ;
    d = ((a - 2) * 2) / 2;

    printf("Result: \n A: %d \n B: %d \n C: %d \n D: %d \n", a, b, c, d);

    return 0;
}

