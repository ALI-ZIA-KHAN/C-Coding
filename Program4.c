// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);




// A relational operator checks the relationship between two operands. 
// If the relation is true, it returns 1; if the relation is false, it returns value 0.

    int m=5;
    int n=4;
    printf("The m & n is : %d", m==n);

    return 0;
}