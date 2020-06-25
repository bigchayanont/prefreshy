#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char stringInput[128];
    char wordCompare1[128];
    char wordCompare2[128];
    int wordCompareRange;

    printf("strncmp example code for compare string which can choose how many characters to compare!\n");
    printf("Type the same or different to see what is going on!\n");
    printf("Your first word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",wordCompare1);

    printf("Your second word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",wordCompare2);

    printf("How many character to compare: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%d",&wordCompareRange);


    if(strncmp(wordCompare1,wordCompare2,wordCompareRange) == 0)
    {
        printf("You wrote the correct format and the return is 0!");
    }
    else
    {
        printf("You wrote the wrong format and the return is %d which is not 0!",strncmp(wordCompare1,wordCompare2,wordCompareRange));
    }

}
