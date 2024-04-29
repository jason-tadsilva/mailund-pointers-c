#include <stdio.h>

int main(void)
{
    char c;
    printf("%zu %zu\n", sizeof(char), sizeof c);

    // a character literal and an integer in C
    printf("%zu %zu\n", sizeof('a'), sizeof(1));

    int i;
    printf("%zu %zu\n", sizeof(int), sizeof i);

    double d;
    printf("%zu %zu\n", sizeof(double), sizeof d);

    char *ptr = "123456789";
    char str[10] = "12345";
    int numbers[10];

    printf("sizeof(ptr) = %zu\n", sizeof ptr);
    printf("sizeof(str) = %zu\n", sizeof str);
    printf("sizeof(numbers) = %zu\n", sizeof numbers);

    return 0;
}