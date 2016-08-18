#include <stdio.h>

//constant
#define CONST1 10


int main() {

    /*

    Integer Types

    char            1 byte          -128 to 127 or 0 to 255
    unsigned char   1 byte          0 to 255
    signed char     1 byte          -128 to 127
    int             2 or 4 bytes    -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    unsigned int    2 or 4 bytes    0 to 65,535 or 0 to 4,294,967,295
    short           2 bytes         -32,768 to 32,767
    unsigned short  2 bytes         0 to 65,535
    long            4 bytes         -2,147,483,648 to 2,147,483,647
    unsigned long   4 bytes         0 to 4,294,967,295

    Floating Point Types

    float           4 byte          1.2E-38 to 3.4E+38      6 decimal places
    double          8 byte          2.3E-308 to 1.7E+308    15 decimal places
    long double     10 byte         3.4E-4932 to 1.1E+4932  19 decimal places

    */

    //contant
    const int CONST2 = 30;

    printf("const1: %d const2: %d \n", CONST1, CONST2);

    int a = 2;
    printf("int: %d \n", a);

    char txt[] = "Hello";
    char x = 'X';
    printf("char: %s - %c \n", txt, x);

    float b = 4.5454545454;
    printf("float: %f \n", b);

    double c = 43.4943873;
    printf("Double: %f \n", c);

    long d = 403094830294382;
    printf("long: %ld \n", d);

    return 0;
}
