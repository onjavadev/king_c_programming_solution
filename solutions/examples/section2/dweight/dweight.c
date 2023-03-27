/*
 * Name: dweight.c
 * Description: Computing the Dimensional Weight of a Box
 * Date: 20/03/2023
 * Authour: Mark R.
 */

#include <stdio.h>

int main(void)
{

   // Объявляем переменные
   int length = 0,
       width  = 0,
       height = 0;
   //  volume = 0,
   //  weight = 0;

   // Statements
   printf("Enter length: ");
   scanf("%d", &length);
   printf("Enter width: ");
   scanf("%d", &width);
   printf("Enter height: ");
   scanf("%d", &height);


   // вычисляем объем используя не конастаны, а значения переменных
   // volume = length * width * height;

   // вычисляем объемный вес
   // weight = (volume + 165) / 166;

   // инструкции для печати результата на экране
   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", length * width * height);
   printf("Dimensional Weight of the box (pounds): %d\n", ((length * width * height) + 165) / 166);

   return 0;
}
