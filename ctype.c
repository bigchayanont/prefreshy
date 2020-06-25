/* Created by Chayanont Piyawatcharavijit (P'Big)*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char stringInput[128];
    char string[128];
    char uppercaseString[128];
    char lowercaseString[128];
    int i;
    int upperRet = 0;
    int lowerRet = 0;
    int digitRet = 0;
    int spaceRet = 0;



    printf("This program is use for show how does function that I suggest in the slide works!\n");

    printf("Enter your string that wanted to test!: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%[^\n]",string);   /* the reason we use %[^\n] is because normally %s won't accept white space but skip don't use it if you are not working with white space :)*/

    for(i = 0; i < strlen(string) ; i++)
    {
        if(isupper(string[i]) != 0)
        {
            upperRet = 1;
        }
        else if(islower(string[i]) != 0)
        {
            lowerRet = 1;
        }
        else if(isdigit(string[i]) != 0)
        {
            digitRet = 1;
        }
        else if(isspace(string[i]) != 0)
        {
            spaceRet = 1;
        }
    }
    printf("\n");
    if(upperRet == 1)
    {
        printf("There is uppercase character in the string.\n");
    }
    if(lowerRet == 1)
    {
        printf("There is lowercase character in the string.\n");
    }
    if(digitRet == 1)
    {
        printf("There is digit in the string.\n");
    }
    if(spaceRet == 1)
    {
        printf("There is space in the string.\n");
    }

    for(i = 0; i < strlen(string)+1 ; i++)
    {
        uppercaseString[i] = toupper(string[i]);
        lowercaseString[i] = tolower(string[i]);
    }

    printf("Uppercase version of the string is: %s\n",uppercaseString);
    printf("Lowercase version of the string is: %s\n",lowercaseString);

}
