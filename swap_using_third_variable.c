#include<stdio.h>
int main(){

int a,b,temp;
printf("ENTER a:");
scanf("%d",&a);

printf("ENTER b:");
scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
 printf("AFTER SWAPPING VALUE OF  a:%d \n",a);
printf("AFTER SWAPPING VALUE OF b: %d",b);




return 0;

}