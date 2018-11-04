#include <stdio.h>
#include <math.h>
#define a (x+ 1 )
#define sq (HUGE_VAL+1)

int x = 2;
void b() {int x = 11; printf ("b %d\n %f\n", a, sq);} 
void c() {printf ( "c %d\n %f\n", a, sq); }
void main() { b(); c(); }


