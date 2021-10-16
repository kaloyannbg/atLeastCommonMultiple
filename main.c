/*
Задача 10. Напишете програма на С, която съдържа 3 функции, изнесете
прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и да
намерите корен квадратен от него.
*/

#include <stdio.h>
#include "task10_prototypes.h"

int main()
{

  float firstNum = 30;
  float secondNum = 25.0;

  int commonMultiple = atleastCommonMultiple(firstNum, secondNum);

  if (commonMultiple)
  {
    printf("  at least Common Multiple = %.2f and %.2f =  %d\n\n", firstNum, secondNum, commonMultiple);
  }
  else
  {
    printf(" -- Please enter different numbers --");
  }

  //Пример : НОК(300,6300 )= 6300, защото  6300 се дели на  300

  float numForSquareRoot = -4.0;

  if (squareRoot(numForSquareRoot) != 1) // if return -1 the result is negative number;
  {
    numForSquareRoot = absoluteValue(numForSquareRoot); // make negative number - positive

    printf("Square root of %.2f = %.2f", numForSquareRoot, squareRoot(numForSquareRoot)); // print square root
  }

  // b. Използвайте втората си функция, за да обърнете числото в положително и да намерите корен квадратен от него.

  return 0;
}
