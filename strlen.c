/* Created by Chayanont Piyawatcharavijit (P'Big)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char stringInput[128];
    char inputWord[128];

    printf("strlen example code to show how many character from the input string!\n");
    printf("Your word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",inputWord);

    printf("%s length is %d",inputWord,strlen(inputWord));
}
