#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
	
	uint8 name[15];
	uint32 math;
	uint32 arabic;
	uint32 language;
	f32 precentage;
}student;
void enter_Check(uint32 *data, uint8 sub[10]);
int main(){
	
	  /*
	  1) C Program to store information (name, roll and marks) for a 
         student using structure and display it.
	  */
	  
	  student std1;
	  printf("enter student name: ");
	  gets(std1.name);
	  printf("Student Grades (max grade 100)\n");
      enter_Check(&(std1.math), "math");	   
	  enter_Check(&(std1.arabic), "arabic");	   
      enter_Check(&(std1.language), "language");	   

	  printf("------------ Stuedent Data -------------\n");
	   
	   std1.precentage = (float)((std1.math + std1.arabic + std1.language) / 3.0);
	   
	   printf("Student Name: %s \n",std1.name);
	   printf("Math: %d\n",std1.math);
	   printf("arabic: %d\n",std1.arabic);
	   printf("language: %d\n",std1.language);
	   printf("final precentage: %.2f\n",std1.precentage);


	
	return 0;
}
void enter_Check(uint32 *data, uint8 sub[10]) {
    uint8 validInput = 0;
    
	 printf("Enter %s grade:", sub);
   again:while (!validInput) {
       
        
        if (scanf("%d", data) == 1) {
			
            if (*data >= 0 && *data <= 100) {
                validInput = 1; 
            } else {
                 printf("Plz Enter %s grade again:", sub);
            }
        
    }else{

		while (getchar() != '\n'); // clear buffer
        printf("Plz Enter %s grade again:", sub);

		
	}
	
	}
}

