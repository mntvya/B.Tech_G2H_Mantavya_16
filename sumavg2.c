#include <stdio.h>
int main(){
    int arr[5]= {4,5,3,5,6};
    int n=5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        /* code */
    }
    float avg =0.0;
    avg = (float)sum/n;
    printf("sum of array elemts is :%d \n and avg is %f",sum ,avg);
    
}