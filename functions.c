/*
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
*/

#include "task10_prototypes.h"

int atleastCommonMultiple(int numberOne, int numberTwo)
{

    numberOne = (int)absoluteValue(numberOne);
    numberTwo = (int)absoluteValue(numberTwo);

    if (numberOne == numberTwo)
    {
       return 0;
    }
    else
    {
        int divisor = 2;

        int total = 1;

        while (numberOne > 1 || numberTwo > 1)
        {

            if ((numberOne % divisor) == 0 && (numberTwo % divisor == 0))
            {
                numberOne = numberOne / divisor;
                numberTwo = numberTwo / divisor;

                total = total * divisor;
            }
            else if (numberOne % divisor == 0)
            {
                numberOne = numberOne / divisor;

                total = total * divisor;
            }
            else if (numberTwo % divisor == 0)
            {
                numberTwo = numberTwo / divisor;

                total = total * divisor;
            }
            else
            {
                divisor++;
            }
        }

        return total;
    }
}

/*
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
*/
float absoluteValue(float number)
{

    if (number < 0)
    {
        number = number / -1;
    }

    return number;
}

/* 3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и да
намерите корен квадратен от него.

*/

float squareRoot(float number) {

    float result = number * number;

    if(result < 0) {
        return -1; //a. Проверете дали резултатът е отрицателно число и върнете -1.
    }

    return result;

}
