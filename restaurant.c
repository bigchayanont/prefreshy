#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringInput[128];
    int menu[4] = {0, 0, 0, 0};
    int order = 0;
    int count = 0;

    printf("\nMenu:\n");
    printf("1 - Hamburger\n");
    printf("2 - Pizza\n");
    printf("3 - Steak\n");
    printf("4 - Coke\n\n");

    while (order != -1)
    {
        printf("What's the order? ");
        fgets(stringInput, sizeof(stringInput), stdin);
        sscanf(stringInput, "%d", &order);
        if (order == 1)
        {
            menu[0]++;
            count++;
        }
        else if (order == 2)
        {
            menu[1] = menu[1] + 1;
            count = count + 1;
        }
        else if (order == 3)
        {
            menu[2] += 1;
            count += 1;
        }
        else if (order == 4)
        {
            menu[3]++;
            count++;
        }
    }
    printf("\nToday's sale:\n");
    printf("Hamburger - %d\n", menu[0]);
    printf("Pizza - %d\n", menu[1]);
    printf("Steak - %d\n", menu[2]);
    printf("Coke - %d\n", menu[3]);
    printf("Total: %d dishes\n", count);

}
