/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2;
  float avg;
  printf("Enter marks of first subject:");
  scanf("%d", &m1);
  printf("Enter marks of first subject:");
  scanf("%d", &m2);
  avg = (m1 + m2) / 2;
  printf("Average of two subjects is:%.2f", avg);
  return 0;
}
