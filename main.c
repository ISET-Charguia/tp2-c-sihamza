#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf(" Donner un nombre N de 3 chiffre : ");
    scanf("%d",&n);
    if (( 99<n) && ( n<999))
    {
        printf("%d est le nombre de centaine , %d est le nombre de dizaine ,  %d est le nombre d unité  ",n/100,(n/10)%10,n%10);
    }
    else
    {
        printf(" ERROR : le nombre donner N : negative ou N<99 ou N>999  ");
    }
}
