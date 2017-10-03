#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c, max,min;
    printf(" Donner un eniter A/B/C : ");
    scanf("%d/%d/%d",&a,&b,&c);
    max = a ;
    min = c ;

    if (max<b)
    {
        max = b ;
    }
    else
    if (max<c)
    {
        max = c;
    }

    printf("%d est le max ! ",max) ;

    if (min>b)
    {
        min = b;
    }
    else
    if (min>a)
    {
        min = a;
    }

    printf("%d est le min ",min) ;
}
