#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n ;
    printf(" Donner un eniter N : ");
    scanf("%f",&n);
    if (n<0)
    {
        printf("%.0f est la valeur absolout de %.0f ",n*(-1),n);
    }
    else
    {
        printf("%.0f est la valeur absolout de %.0f ",n,n);
    }
}
