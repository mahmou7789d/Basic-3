#include<stdio.h>
#include<string.h>
#include"STD_TYPES.h"
typedef struct 
{
    uint8 Name[30];
    uint16 Id , grade;
}Info;
Info info[10];
void Information();
void view();
 uint16 IsAlphapet(uint8 * str);

int main()
{
    Information();
    printf("\n\n");
    printf("<<Information>>\n");
    view();
    return 0;


}
void Information()
{
  uint16 i;
  for(i=0;i<10;i++)
  {
    printf("Enter the name of student (%d): ",i+1);
     scanf("%[^\n]%*c", info[i].Name);
     fflush(stdin);
    if(IsAlphapet(info[i].Name))
    {

    }
    else
    {
        printf("Invalid_Input...\n");
        
    }
    printf("Enter the Id of student(%d): ",i+1);
    if(scanf("%d",&info[i].Id)==1)
    {
         fflush(stdin);
    }
    else
    {
        printf("Invalid_input");
    }
     printf("Enter the grade of student(%d): ",i+1);
    if(scanf("%d",&info[i].grade)==1)
    {
         fflush(stdin);
    }
    else
    {
        printf("Invalid_input");
    }
  }
}
void view()
{
    uint16 j;
    for(j=0;j<10;j++)
    {
        printf("%d): %s\n",j+1,info[j].Name);
        printf("%d): %d\n",j+1,info[j].Id);
        printf("%d): %d\n",j+1,info[j].grade);
    }


}
 uint16 IsAlphapet(uint8 * str)
 
 {
    uint16 i , AlphaSearch;

    for(i=0; str[i]!='\0'; i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ') )
        {
            AlphaSearch=0; /*there is a digit*/
        }
        else
        {
            AlphaSearch=1;  /*there is no digit*/
        }
    }
    return AlphaSearch;
 }

