#include <stdio.h>

main()
{
    int w, x, y, z;
    int i = 3; int j = 4;
    {
        int i =5;
        w = i + j;
    }

    x = i + j;

    {
        int j = 6;
        i = 7;
        y = i + j;
    }

    z = i + j;

    printf("%d,%d,%d,%d", x, w, y, z);
}