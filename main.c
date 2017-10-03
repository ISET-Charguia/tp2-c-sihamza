#include <stdio.h>
#include <stdlib.h>

int main()
{   int n ;
    printf("Donner Un entier : ");
    scanf("%d",&n);
    if (( n % 3 ) == 0 )
    {
        printf("%d est devesible sur 3 ",n) ;
    }
    else
    {
     printf("%d n est pas devesible sur 3 ",n) ;
    }
}
