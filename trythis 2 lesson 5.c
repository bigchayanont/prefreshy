#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char stringInput[128];
    char favAnimal[] = "cat";
    char userGuess[128];

    printf("Question: Guess my favorite animal\n");
    while(1)
    {
        printf("Answer: ");
        fgets(stringInput,sizeof(stringInput),stdin);
        sscanf(stringInput,"%s",userGuess);

        if(strcmp(favAnimal,userGuess) == 0 )
        {
            printf("correct!\n");
            break;
        }
        else
        {
            printf("wrong!\n");
        }
    }
}
