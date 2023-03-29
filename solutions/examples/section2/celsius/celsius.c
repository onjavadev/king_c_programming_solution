/*
 * Name: celsius.c
 * Description: Converting from Fahrenheit to Celsius
 * Date: 29/03/2023
 * Authour: Mark R.
 */

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
   float fahrenheit = 0, celsius = 0;

   printf("Enter Fahrenheit temperature: ");
   scanf("%f", &fahrenheit);

   celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

   printf("Celsius equivalent: %.1f\n", celsius);

   return 0;
}
