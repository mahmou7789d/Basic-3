#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include "STD_TYPES.h"
typedef struct dnode
{
    struct dnode *Next;
    struct dnode *Prev;
    sint32 Info;
}DNode_t;


void DoubleList_DisplayList(DNode_t * start);
uint8 DoubleList_Count_Nodes(DNode_t * start);
sint8 DoubleList_Search(DNode_t * start,sint32 Data );
DNode_t* DoubleList_InsertAtbeginning(DNode_t * start,sint32 Data );
DNode_t* DoubleList_InsertInEmpty (DNode_t *start , sint32 Data);
void     DoubleList_InsertAtEnd(DNode_t * start,sint32 Data);
void DoubleList_InsertAfterNodeWithParticularValue(DNode_t *start,sint32 ParticularValue,sint32 NewNodevalue);
DNode_t* DoubleList_InsertBeforeNodeWithParticularValue(DNode_t *start,sint32 ParticularValue,sint32 NewNodevalue);
DNode_t* SingleList_DeleteCertainNodeInList(DNode_t *start,uint8 Dnode);
DNode_t * SingleList_ReverseList(DNode_t *start);


#endif // DLL_H_INCLUDED
