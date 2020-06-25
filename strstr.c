/* Created by Chayanont Piyawatcharavijit (P'Big)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char stringInput[128];
    char word[128];
    char searchString[128];
    char *retVal;

    printf("strstr example code to show this function search for a string!\n");
    printf("It will return the rest of the string where it was found!\n");

    printf("Enter string to search for in a string: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",word);

    printf("Enter string to be search: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%s",searchString);

    retVal = strstr(searchString,word);


    printf("%s",retVal);

}
