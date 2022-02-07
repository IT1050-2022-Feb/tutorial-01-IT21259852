/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2;
  int total;
  float average;

  printf("Enter the marks of the first subject:");
  scanf("%d", &sub1);

  printf("Enter the marks of the second subject:");
  scanf ("%d",&sub2);

  total = sub1 + sub2;

  average = total/2;

  printf ("%.2f" ,  average);


  
  
  return 0;
}

