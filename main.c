#include <stdio.h>
#include <stdlib.h>

float x,y;

int main()
{
    printf("                       Currency Converter!\n\n");
    printf("      Enter value\n");
    scanf("%f",&x);

    y = x*15.69;
    printf("      %.3f dollars = %.3f egp \n",x,y);

    return 0;
}
