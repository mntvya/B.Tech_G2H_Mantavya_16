#include <stdio.h>
int main()
{
    int n;
    int i, prod = 1;
    printf("ENter number ofr factorial");
    scanf(" %d", &n);
    if (n < 0)
    {
        printf("no factorial for negative numbers");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            prod *= i;
        }
        printf("The factorial is %d", prod);
    }
    return 0;
}