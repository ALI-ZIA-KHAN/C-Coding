

#include <stdio.h>
int main()
{
    // int testInteger;
    // printf("Enter an integer: ");
    // scanf("%d",&testInteger);
    // printf("The No u entered is : %d",testInteger);

    /*Notice, that we have used &testInteger inside scanf(). 
    It is because &testInteger gets the address of testInteger, 
    and the value entered by the user is stored in that address.
    */


    //

    int a,b;
    int c;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    c=a+b;
    printf("Sum of numbers you entered is : %d",c);
    return 0; 
    
       

};
   
 