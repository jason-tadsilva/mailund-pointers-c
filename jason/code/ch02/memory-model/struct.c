#include <stdio.h>

struct data
{
    char c;
    int i;
    double d;
};

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX3(a,b,c) MAX((a), MAX((b),(c)))

int main(void)
{

    struct data data;
    printf("sizeof(data) = %zu\n", sizeof data);
    printf("max size of components = %zu\n", 
    MAX3(sizeof data.c, sizeof data.i, sizeof data.d));

    printf("data at %p\n", (void*)&data);
    printf("data.c at %p with sizeof(data.c) = %zu\n", (void*)&data.c, sizeof data.c);
    printf("data.i at %p with sizeof(data.i) = %zu\n", (void*)&data.i, sizeof data.i);
    printf("data.d at %p with sizeof(data.d) = %zu\n", (void*)&data.d, sizeof data.d);

    return 0;
}