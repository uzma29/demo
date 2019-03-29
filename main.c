#include <stdio.h>
#include <stdlib.h>
#include "simple-math.h"

int main()
{
    char c;
    int a,b;
    printf("enter '/' for division \n '*' to multiply\n");
    scanf("%c",&c);
    if(c=='/')
        division(a,b);
    else if(c=='*')
        mul(a,b);
    else
        printf("wrong input\n");

    return 0;
}



