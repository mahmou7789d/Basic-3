/*
//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK...........999999999......
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK...........99999999999.....
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK........... 999999999999....
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK............ 9999999999999...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK............ 9999999999999...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK............. 9999...9999999..
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK.............. 9999....999999..
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK............... 9999....999999..
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK................ 9999...9999999..
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK............... 99999999999999..
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK................ 99999999999999..
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK............... 99999999999999..
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK...............99999999999999..
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK................9999999999999..
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK......................999999..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK.....................999999..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK............ 99999..999999...
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK........... 9999999999999...
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK........... 9999999999999...
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK.......... 999999999999....
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............ KKKKK.......KKKKKKKK..........99999999999.....
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS.............. KKKKK........KKKKKKK...........999999999......
//.....................................................................................................................................

==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 21 - Lecture 21 - Problem number 9
Program     :   Write a C function that returns the maximum data value in the linked list.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (9) Write a C function that returns the maximum data value in the linked list.
+
==========================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "SLL.h"

/*
*/

int main()
{
    sint32 Dnode;

    SNode_t* Start=SingleList_CreateNodeList();

    sint32 Max=SingleList_MaxDataInList(Start);

    printf("Max = %d",Max);

    return 0;
}
