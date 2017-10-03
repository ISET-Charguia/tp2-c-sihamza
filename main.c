#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
    float x ;
    printf(" Donner un eniter A/B : ");
    scanf("%d/%d",&a,&b);
    x = (-1 * b) / (a +0.00) ;
    printf (" La solution du %dx + %d = 0  ,  x = %f",a,b,x) ;
}
