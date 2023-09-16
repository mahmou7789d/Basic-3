#include<stdio.h>
#include<string.h>
#include"STD_TYPES.h"
uint16 IsAlphapet(uint8 * str);
typedef struct 
{
    uint8 Name[20];
	uint16 roll;
	f32 Marks;
   
   
}Student;
 Student student[3];
 uint8 i,j,ch;
 int main()
 {
   
    
    for(i=0;i<3;i++)
    {
         printf("Enter the name of student number(%d): ",i+1);
         scanf("%[^\n]%*c", student[i].Name);
         fflush(stdin);
         if(IsAlphapet(student[i].Name))
         {
            /*Do nothing , continue*/
         }
         else
         {
           printf("Invalid_Name...\n");
           return 0;
          }
          
            printf("Enter his roll: ");
            if(scanf("%d",&student[i].roll) == 1)
            {
                /*Do nothing , continue*/
                fflush(stdin);
            }
            else
            {
                printf("Invalid_Roll...\n");
                return 0;
            }
            
            printf("Enter the Total marks he/she has got: ");
                if(scanf("%f",&student[i].Marks) == 1)
                {
                      /*Do nothing , continue*/
                      fflush(stdin);
                }
                else
                {
                    printf("Invalid_Marks....\n");
                    return 0;
                }
                printf("\n");

    }
     printf("View Details: 1)yes or 2)No ");
     printf("Answer: ");
     scanf("%d",&ch);
     switch (ch)
     {
     case (1):
        for(j=0;j<3;j++)
                     {
                      printf("The student number (%d) whose name is : %s\n",j+1,student[j].Name);
                      printf("His roll is : %d\n ",student[j].roll);
                      printf("His marks is : %.2f\n",student[j].Marks);
                     }
        break;
        case (2):
        printf("Application will close...\n");
        break;
        default:
        break;
     }
     
    return 0;
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

 