#include <stdio.h>

int main(void)
{
    char c = 1;
    printf("%d %p\n", c, (void*)&c);

    int i = 2;
    printf("%d %p\n", i, (void*)&i);

    double d = 3.0;
    printf("%f %p\n", d, (void*)&d);

    // to print the result returned by sizeof
    // use either %lu or %zu format specifier
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(char*) = %lu\n", sizeof(char*));

    return 0;
}