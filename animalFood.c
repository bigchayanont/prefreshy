#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int food[5][4] = { {1, 0, 0, 1}, {0, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 0, 1}, {0, 1, 1, 0} };
    char stringInput[128];
    int row = -1;
    int column = -1;
    
    while (strcmp(stringInput, "\n") != 0)
    {
        fgets(stringInput, sizeof(stringInput), stdin);
        sscanf(stringInput, "%d %d", &row, &column);
        if(strcmp(stringInput, "\n") == 0)
        {
            break;
        }
        if(food[row-1][column-1] == 1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
