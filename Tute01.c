/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
  float average;

  printf("enter marks subjects= ");
  scanf("%d%d",&mark1,&mark2);
  
  average = (mark1 + mark2)/2.0;

  printf("average= %.2f",average);


  
  return 0;
}

