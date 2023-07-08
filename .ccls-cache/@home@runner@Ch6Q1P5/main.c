// Program to determine if a year is a leap year

#include <stdio.h>

int main(void) {
  int year, rem4, rem100, rem400;

  printf ("Enter the year to be tested: ");
  scanf ("%d", &year);

  rem4 = year % 4;
  rem100 = year % 100;
  rem400 = year % 400;

  if ( (rem4 == 0 && rem100 != 0) || rem400 == 0 ) {
    printf ("it is a leap year\n");
  }
  else {
    printf ("Nope, it is not a leap year\n");
  }
  
  return 0;
}