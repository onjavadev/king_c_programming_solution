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
   int length,
       width,
       height,
       volume,
       weight;

   // Statements
   // присваиваем тестовые значения
   length = 12;
   width = 10;
   height = 8;

   // вычисляем объем используя не конастаны, а значения переменных
   volume = length * width * height;

   // вычисляем объемный вес
   weight = (volume + 165) / 166;

   // инструкции для печати результата на экране
   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional Weight of the box (pounds): %d\n", weight);

   return 0;
}
