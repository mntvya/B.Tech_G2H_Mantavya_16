#include <stdio.h>
int main(){
    float km;
    float mile;
    int confirm;
    printf("Enter you desired parameter to calculate - 1 for km and 2 for miles \n");
    scanf("%d",&confirm);

    if (confirm == 1)
    {
        printf("enter the vlaue of miles to convery into km ");
        scanf("%f",&mile);
        km = mile * (0.621);
        printf("%f",km);

    }
    else{
        printf("Enter the km to miles");
        scanf("%f",&km);
        mile = km *(1.6);
        printf("%f",mile);
    }

     return 0;
    

}