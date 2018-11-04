#include <stdio.h>
main (){
int w, x, y, z;
int i = 4;
int j = 5;
{
    int j = 7;
    i = 6; //aliasing
    w = i + j;
}

x = i + j;

{
    int i = 8;
    y = i + j;
}

z = i + j;

printf("%d,%d,%d,%d",x,w,y,z);
}