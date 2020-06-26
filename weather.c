#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringInput[128];
    int weather[4][7] = {{1, 2, 3, 3, 3, 1, 1},
                         {2, 2, 3, 3, 3, 3, 1},
                         {2, 2, 1, 1, 2, 1, 1},
                         {3, 2, 1, 3, 2, 1, 2}};
    int week = 0;
    int day = 0;
    int report = 0;

    printf("\nWelcome to weather reporter!\n\n");
    while (week != -1)
    {
        printf("Which week (1-4)? ");
        fgets(stringInput, sizeof(stringInput), stdin);
        sscanf(stringInput, "%d", &week);
        if (week == -1)
        {
            break;
        }
        printf("Which day (1-7)? ");
        fgets(stringInput, sizeof(stringInput), stdin);
        sscanf(stringInput, "%d", &day);
        report = weather[week-1][day-1];
        if (report == 1)
        {
            printf("\tWeek %d, day %d was sunny\n\n", week, day);
        }
        else if (report == 2)
        {
            printf("\tWeek %d, day %d was cloudy\n\n", week, day);
        }
        else if (report == 3)
        {
            printf("\tWeek %d, day %d was rainy\n\n", week, day);
        }
    }
    printf("\nGoodbye!\n");

}
