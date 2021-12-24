// swapping of number
#include <stdio.h>
int main()
{
int a,b;
printf("Enter no in 'a' :");
scanf("%d",&a);
printf("Enter no in 'b' :");
scanf("%d",&b);

a=a-b;
b=a+b;
a=b-a;

printf("Now the value of a is %d/n",a);
printf("Now the value of b is %d",b);



    return 0;
}