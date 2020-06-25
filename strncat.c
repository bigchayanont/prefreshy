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
    int characterToCombine;

    printf("strncat example code to show how it combines the words!\n");
    printf("The word that combined will replace with first argument variable(in this case is word1)\n");
    printf("User can choose how many character to combine for the second argument(word2)\n");



    printf("Enter first word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word1);

    printf("Enter second word: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word2);

    printf("How many character to combine: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%d",&characterToCombine);

    strncat(word1,word2,characterToCombine);

    printf("Your string combination is %s\n",word1);



}
