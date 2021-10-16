#include <stdio.h>
#include "task10_prototypes.h"

void printMenu();

int main()
{

    int iChoice = 0;

    float fNumOne = 0.0;

    float fNumTwo = 0.0;

    while (iChoice != 2)
    {

        printMenu();

        scanf("%d", &iChoice);

        if (iChoice == 1)
        {

            printf("  -- Please enter 2 numbers with space between: ");

            scanf("%f %f", &fNumOne, &fNumTwo);

            if (fNumOne != fNumTwo)
            {
                printf("  -- LCM is: %d -- \n\n", atleastCommonMultiple(fNumOne, fNumTwo));
            }
            else
            {
                printf(" -- Please enter different numbers -- \n\n");
            }
        }
    }

    return 0;
}

void printMenu()
{

    printf(" -- FIND LCM -- \n");

    printf(" -- Enter 1 to find LCM of 2 positive numbers\n");

    printf(" -- Enter 2 to quit\n\n");

    printf(" -- Please enter your choice: ");
}
