#include <stdio.h>
#include <string.h>

void showmem(void *address, int size, char *label)
{
    unsigned char *mem = address;
    const int wrap = 20;
    printf( "%s\n", label );

    for (int i = 0; i < size; i++)
    {
        printf("%03d ", mem[i]);

        if (i % wrap == wrap-1) printf("\n");
    }

    if (size % wrap != wrap - 1) printf("\n");
}

int main()
{
    int i = 45;
    float f = 45;
    double d = 45;
    char * s = "45";
    showmem(&i, sizeof(i), "i");
    showmem(&f, sizeof(f), "f");
    showmem(&d, sizeof(d), "d");
    showmem(s, strlen(s), "s");
}