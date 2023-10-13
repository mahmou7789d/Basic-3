#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include "STD_Types.h"

typedef struct node
{
   sint32 Info ;
   struct node *Link ;
}SNode_t ;

void     SingleList_DisplayList(SNode_t * start);
uint8    SingleList_CountNodes(SNode_t * start);
sint8    SingleList_Search(SNode_t * start,sint32 Data );// return position if data is found and return -1 if data not found
SNode_t* SingleList_InsertAtbeginning(SNode_t * start,sint32 Data );
void     SingleList_InsertAtEnd(SNode_t * start,sint32 Data );
SNode_t* SingleList_CreateNodeList(void);
void SingleList_InsertAfterNodeWithParticularValue(SNode_t *start,int ParticularValue,int NewNodevalue);
SNode_t* SingleList_InsertBeforeNodeWithParticularValue(SNode_t *start,sint32 ParticularValue,sint32 NewNodeValue);
void SingleList_InserNodeAtCertainPos(SNode_t** start, uint8 Pos,sint32 newnode);
SNode_t* SingleList_DeleteCertainNodeInList(SNode_t *start,uint8 Dnode);

SNode_t* SingleList_DeleteFirstNode(SNode_t *start);

SNode_t * SingleList_ReverseList(SNode_t *start);
SNode_t* singleListReturnMiddle(SNode_t *start);
void SingleList_PrintMiddle(SNode_t* start);
sint32 SingleList_Sum_of_List(const SNode_t *start);
sint32 SingleList_MaxDataInList(SNode_t *start);

#endif // SLL_H_INCLUDED
