/*
//.....................................................................................................................................
//.TTTTTTTTTTTTTTTTTT...............AAAAAAA....................SSSSSSSSSSS.............. KKKKK.......KKKKKKKK...........555555555555...
//.TTTTTTTTTTTTTTTTTT...............AAAAAAAA..................SSSSSSSSSSSSS............. KKKKK......KKKKKKKK............555555555555...
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA.................SSSSSSSSSSSSSSS............ KKKKK.....KKKKKKKK.............555555555555...
//.TTTTTTTTTTTTTTTTTT..............AAAAAAAAA................SSSSSSSSSSSSSSSSS........... KKKKK....KKKKKKKK.............5555555555555...
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSSSS.SSSSSSSS........... KKKKK...KKKKKKKK..............555555..........
//.......TTTTTT...................AAAAAAAAAAA...............SSSSSS.....SSSSSS........... KKKKK..KKKKKKKK...............555555..........
//.......TTTTTT...................AAAAAAAAAAAA..............SSSSSSS..................... KKKKK.KKKKKKKK................55555...........
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSS................... KKKKKKKKKKKKK.................55555555555.....
//.......TTTTTT..................AAAAAA.AAAAAA..............SSSSSSSSSSSS................ KKKKKKKKKKKK..................555555555555....
//.......TTTTTT..................AAAAA...AAAAAA..............SSSSSSSSSSSSS.............. KKKKKKKKKKKKK................ 5555555555555...
//.......TTTTTT.................AAAAAA...AAAAAA...............SSSSSSSSSSSSSS............ KKKKKKKKKKKKK................ 55555555555555..
//.......TTTTTT.................AAAAAA...AAAAAA................SSSSSSSSSSSSSS........... KKKKKKKKKKKKKK............... 55555555555555..
//.......TTTTTT................AAAAAA.....AAAAAA.................SSSSSSSSSSSSS.......... KKKKKKKKKKKKKKK.............. 55555...555555..
//.......TTTTTT................AAAAAAAAAAAAAAAAA....................SSSSSSSSSS.......... KKKKKKK.KKKKKKK........................55555..
//.......TTTTTT................AAAAAAAAAAAAAAAAA.......................SSSSSSS.......... KKKKKK...KKKKKKK.......................55555..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSS.......SSSSSS.......... KKKKK....KKKKKKKK............ 5555....555555..
//.......TTTTTT...............AAAAAAAAAAAAAAAAAAA.......... SSSSSS......SSSSSS.......... KKKKK.....KKKKKKK............ 55555...555555..
//.......TTTTTT...............AAAAAA.......AAAAAAA..........SSSSSSSS..SSSSSSSS.......... KKKKK.....KKKKKKKK........... 55555555555555..
//.......TTTTTT.............. AAAAA.........AAAAAA..........SSSSSSSSSSSSSSSSSS.......... KKKKK......KKKKKKK........... 5555555555555...
//.......TTTTTT.............. AAAAA.........AAAAAA...........SSSSSSSSSSSSSSSS........... KKKKK.......KKKKKKK...........5555555555555...
//.......TTTTTT............. AAAAA.........AAAAAAA...........SSSSSSSSSSSSSS............ KKKKK.......KKKKKKKK...........55555555555....
//.......TTTTTT............. AAAA...........AAAAAA............SSSSSSSSSSS.............. KKKKK........KKKKKKK............555555555.....
//.....................................................................................................................................

==========================================================================================
Diploma     :   BASIC03 - Eng. Amgad Samir
Target      :   C Structure
Name        :   Assignment 21 - Lecture 21 - Problem number 3
Program     :   Write a C function to insert a node Before a node with particular value in a single linked list.
Author      :   Mahmoud Hamed
==========================================================================================
Description :   (5) Write a C function to delete a node with particular info in a
                    single linked list, run the program and test this function when
                    the required node is: the only node, the first node, the last node,
                    in between the nodes, not found in the list.

+
==========================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "SLL.h"

int main()
{
    sint32 Dnode;

    SNode_t* Start=SingleList_CreateNodeList();


    printf("\nplease enter node to delete  : ");
    scanf("%d",&Dnode);

    Start=SingleList_DeleteCertainNodeInList(Start,Dnode);

    SingleList_DisplayList(Start);

    return 0;
}
