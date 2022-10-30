#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    printf("Enter third number : \n");
    scanf("%d", &c);
    if (a == b && a == c)
    {
        printf("Three Numbers are equal");
    }
    else if (a == b & a > c)
    {
        printf("%d=a and %d=b both are biggers", a, b);
    }
    else if (a == c & a > b)
    {
        printf("%d=a and %d=c both are biggers", a, c);
    }
    else if (b == c & b > a)
    {
        printf("%d=b and %d=c both are biggers", b, c);
    }
    else if (a > b && a > c)
    {
        printf("Larger is %d=a", a);
    }
    else if (b > a && b > c)
    {
        printf("Larger is %d=b", b);
    }
    else if (c > a && c > b)
    {
        printf("Larger is %d=c", c);
    }

    return 0;
}