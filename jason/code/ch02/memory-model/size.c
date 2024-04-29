#include <stdio.h>

int main(void)
{
    char c;
    printf("%zu %zu\n", sizeof(char), sizeof c);

    // a character literal and an integer in C
    printf("%zu %zu\n", sizeof('a'), sizeof(1));

    int i;
    printf("%zu %zu\n", sizeof(int), sizeof i);

    int* ptr_i;
    printf("%zu %zu\n", sizeof(int*), sizeof ptr_i);

    double d;
    printf("%zu %zu\n", sizeof(double), sizeof d);

    return 0;
}