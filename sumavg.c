#include <stdio.h>
int main()
{
    int n;
    float sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum += (1 / i);
        /* code */
    }
    printf("summation of series is : %f",sum);
}