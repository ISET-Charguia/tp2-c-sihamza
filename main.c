#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b ;
    int a ;
    printf(" donner un le temps / montant ");
    scanf("%d/%f",&a,&b);

    if (( a <= 5) && ( a > 3))
    {
        printf(" le montat d interesse : %f ", b * 0.095 );
    }
    else
    if (( a > 1) && ( a <=3))
    {
        printf(" le montat d interesse : %f ", b * 0.065 );
    }
    else
    if ( a <= 1)
    {
        printf(" le montat d interesse : %f ", b * 0.085 );
    }
    else
    {
        printf(" le montat d interesse : %f ", b * 0.058 );
    }
}
