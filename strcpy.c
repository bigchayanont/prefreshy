/* Created by Chayanont Piyawatcharavijit (P'Big)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char stringInput[128];
    char inputWord[128];
    char word1[128];
    char word2[128];

    printf("strcpy example code to show how it copy the strings!\n");
    printf("String to copy: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word1);

    printf("string to be copy(just write anything it does not matter): ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word2);

    printf("Your word before copy: %s\n",word2);

    strcpy(word2,word1);

    printf("Your word before copy: %s\n",word2);



}
