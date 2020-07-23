#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXNAME 20
#define MAXLENGTH 64

int main()
{
    int nameCount;
    char name[MAXNAME][MAXLENGTH];
    char stringInput[128];
    int i;

    printf("How many name: ");
    fgets(stringInput,sizeof(stringInput),stdin);
    sscanf(stringInput,"%d",&nameCount);

    for(i = 0;i < nameCount; i++)
    {
        printf("Enter name: ");
        fgets(stringInput,sizeof(stringInput),stdin);
        sscanf(stringInput,"%s",name[i]);
    }

    printf("Name list\n");
    for(i = 0;i < nameCount; i++)
    {
        printf("- %s\n",name[i]);
    }
}
