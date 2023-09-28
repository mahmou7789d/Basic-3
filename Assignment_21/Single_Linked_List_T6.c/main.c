/*
//........................................................................................................................
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk..........................444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk.........................4444444....
//.TTTTTTTTTTTTTTTTTT...........................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk........................44444444....
//.......TTTTTT.................................................................kkkkkk.......................444444444....
//.......TTTTTT.................aaaaaaaaaa..............sssssssssss.............kkkkkk..kkkkkkkk............4444444444....
//.......TTTTTT................aaaaaaaaaaaa............sssssssssssss............kkkkkk.kkkkkkkk.............4444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa...........ssssssssssssss...........kkkkkk.kkkkkkk.............44444444444....
//.......TTTTTT...............aaaaaaaaaaaaaa.......... ssssss.sssssss...........kkkkkkkkkkkkk.............444444444444....
//.......TTTTTT...............aaaaa...aaaaaa.......... sssss...ssssss...........kkkkkkkkkkkk..............44444.444444....
//.......TTTTTT........................aaaaa.......... sssssss..................kkkkkkkkkkk..............444444.444444....
//.......TTTTTT....................aaaaaaaaa.......... sssssssssss..............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT................aaaaaaaaaaaaa...........sssssssssssss............kkkkkkkkkkk............. 44444..444444....
//.......TTTTTT...............aaaaaaaaaaaaaa............sssssssssssss...........kkkkkkkkkkkk............ 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa..............ssssssssssss..........kkkkkkkkkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa..................ssssssss..........kkkkkk.kkkkkk........... 444444444444444..
//.......TTTTTT.............. aaaaa...aaaaaa.......... sssss....ssssss..........kkkkkk.kkkkkkk.......... 444444444444444..
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssss.ssssssss..........kkkkkk..kkkkkk..................444444....
//.......TTTTTT.............. aaaaaaaaaaaaaa.......... ssssssssssssss...........kkkkkk..kkkkkkk.................444444....
//.......TTTTTT...............aaaaaaaaaaaaaaa..........ssssssssssssss...........kkkkkk...kkkkkk.................444444....
//.......TTTTTT................aaaaaaaaaaaaaa...........sssssssssss.............kkkkkk....kkkkkk................444444....
//........................................................................................................................

==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 21 - Lecture 21 - Problem number 3
Program     :   Write a C function to insert a node Before a node with particular value in a single linked list.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (4) Write a C function to insert a node at a certain position in a single linked list.

+
==========================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "SLL.h"

/*

(6) Write a C function to reverse the nodes in a single linked list.

*/

int main()
{
    sint32 Dnode;

    SNode_t* Start=SingleList_CreateNodeList();

    Start=SingleList_ReverseList(Start);

    SingleList_DisplayList(Start);

    return 0;
}
