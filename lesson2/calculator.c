#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int x = get_int("x: "); // x: 2000000000
    int y = get_int("y: "); // y: 2000000000

    printf("%i\n", x + y); // result: -294967296 -> integer overflow
    // int use 32bit = 4294967295

    long a = get_int("a: "); // x: 2000000000
    long b = get_int("b: "); // y: 2000000000

    printf("%li\n", a + b); // result: 4000000000
    // int use 64bit = 9223372036854775807

    long i = get_int("i: "); // i = 1
    long j = get_int("j: "); // j = 3
    
    float k = (float) i / (float) j; // type casting
    printf("%f\n", k); // result: 0.333333
    printf("%.20f\n", k); // result: 0.33333334326744079590 -> floating-point imprecision

    double z = (double) i / (double) j;
    printf("%.20f\n", z); // result: 0.33333333333333331483 -> more precise
}