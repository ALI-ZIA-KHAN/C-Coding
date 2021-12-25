// #include<stdio.h>

// void main(){
// int mark[5] = {19, 10, 8, 17, 9};
// // print the first element of the array
// printf(" The first element is %d", mark[0]);

// return 0;

// }



// #include <stdio.h>
// int main()
// {
//   int arr[] = {10, 20, 30, 40, 50};
  
// //   // display array
// //   for(int i=0; i<5; i++) {
//      printf("%d ", arr[i]);
// //   }

//   return 0;
// }



// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
  int temperature[CITY][WEEK];  
//   int temperature[2][7]; ye krk chlao

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}
