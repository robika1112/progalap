#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, a, b;
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    c = a / b;
    printf("a / b =%.2f", c);
    return 0;
}
