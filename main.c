#include <stdio.h>
#include <stdlib.h>

int main()
{   char x ;
    printf(" donner un charactere ");
    scanf("%c",&x);
    if (( x >= 'A' ) && ( x <= 'Z' ))
    {
        printf("%c est un charactere alphabitique majuscule ",x);
    }
    else
    if (( x >= 'a' ) && ( x <= 'z' ))
    {
        printf("%c est un charactere alphabitique minuscule ",x);
    }
    else
    if (( x >= '0' ) && ( x <= '9' ))
    {
        printf("%c est un chiffre ",x);
    }
    else
    {
        printf("%c est un autre charactaire ",x);
    }
}
