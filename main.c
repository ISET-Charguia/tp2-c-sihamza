#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf(" Donner une annee : ");
    scanf("%d",&n);
    if ( ( n % 400) == 0)
    {
        printf("%d est bissextile  ",n);
    }
    else
    if ( (( n % 4) == 0) && (( n % 100) != 0 ))
    {
        printf("%d est bissextile  ",n);
    }
    else
    {
        printf("%d n est pas bissextile ",n);
    }
}
