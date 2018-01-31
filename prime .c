#include <stdio.h>
int main()
{
    int a,b;

    result = 1;

    printf("Enter a  number: ");
    scanf("%d", &b);

    printf("Enter a number: ");
    scanf("%d", &a);

    while (b!=a)
    {
        result *= a;
        --a;
    }

    printf("Answer = %lld", result);

    return 0;
}
