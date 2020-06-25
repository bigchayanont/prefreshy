#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char stringInput[128];
    char wordCompare1[128];
    char wordCompare2[128];

    printf("strcmp example code for compare string!\n");
    printf("Type the same or different to see what is going on!\n");
    printf("Your first word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",wordCompare1);

    printf("Your second word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",wordCompare2);


    if(strcmp(wordCompare1,wordCompare2) == 0)
    {
        printf("You wrote the correct format and the return is 0!");
    }
    else
    {
        printf("You wrote the wrong format and the return is %d which is not 0!",strcmp(wordCompare1,wordCompare2));
    }

}
