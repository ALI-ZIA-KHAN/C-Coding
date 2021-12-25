#include <stdio.h>

// Variables that are declared outside of all functions are known as external or global variables. They are accessible from any function inside the program.


// void display();

// int n = 5;  // global variable

// int main()
// {
//     ++n;     
//     display();
//     return 0;
// }

// void display()
// {
//     ++n;   
//     printf("n = %d", n);
// }



// The register keyword is used to declare register variables. Register variables were supposed to be faster than local variables.





// A static variable is declared by using the static keyword. For example;

// static int i;
// The value of a static variable persists until the end of the program.


void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}