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

    printf("strcat example code to show how it combines the words!\n");
    printf("The word that combined will replace with first argument variable(in this case is word1)\n");


    printf("Enter first word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word1);

    printf("Enter second word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word2);

    strcat(word1,word2);

    printf("Your string combination is %s\n",word1);



}
