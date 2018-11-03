#include <stdio.h>
#include <math.h>
#define a (x+ 1 )
#define sq (HUGE_VAL+1)

int x = 2;
void b() {int x = 1; printf ("%d\n %f\n", a, sq);} 
void c() { printf ( "%d\n %f\n", a, sq); }
void main() { b(); c(); }


