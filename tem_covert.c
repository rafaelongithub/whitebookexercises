#include <stdio.h>
/***********************************************************
* This is a program from THE C PROGRAMMING LANGUAGE BOOK
* from Brian W. Kernighan and Dennis M. Ritchie.
* I decided to write the more compressible form of the
* program to me.
*
* This program converts a table of farenheits to celsius.
***********************************************************/

#define LOWER   0.0
#define UPPER 300.0
#define STEP   20.0

float fahrToCelsius(float fahr);

int main()
{
  float fahr    = LOWER;
  float celsius = 0.0;

  while(fahr <= UPPER){
    // This is the formula that converts farenheits to celsius
    celsius = fahrToCelsius(fahr);
    printf("Farenheits: %6.4f to Celsius: %6.4f\n", fahr, celsius);
    fahr += STEP;
  }

  return 0;
}

float fahrToCelsius(float fahr){
  celsius = 5.0 * (fahr - 32.0) / 9.0;
  return celsius;
}
