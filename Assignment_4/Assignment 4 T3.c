
//Write a program to display English alphabets from A to Z.

#include <stdio.h>
int main(){
	for(int x=65;x<91; x++){
		printf("%c ",x);
	}
return 0;
}

//-----------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Print alphabets\n");
    char a='A';
	for(int i=0;i<26;i++){
		printf("%c ",a+i);
	}
    return 0;
}
