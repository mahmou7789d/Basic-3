#ifndef CLL_H_INCLUDED
#define CLL_H_INCLUDED

#include "STD_Types.h"

typedef struct cnode
{

    struct cnode *Link;
    sint32 Info;

}CNode_t;


void CircularList_DisplayList(CNode_t * start);
CNode_t* CircularList_InsertAtbeginning(CNode_t * Last,sint32 Data );
CNode_t* CircularList_InsertInEmpty (CNode_t *Last, sint32 Data);
CNode_t*   CircularList_InsertAtEnd(CNode_t * Last,sint32 Data);
CNode_t* CircularList_createNodeList(void);
CNode_t* CircularList_InsertAfterNodeWithParticularValue(CNode_t *Last,sint32 ParticularValue,sint32 NewNodevalue);
CNode_t* CircularList_InsertBeforeNodeWithParticularValue(CNode_t *Last,sint32 ParticularValue,sint32 NewNodevalue);
CNode_t * CircularList_ConcatenateTwoLists(CNode_t * last1,CNode_t * last2);
int  CircularList_Countnodes(CNode_t* Last);
#endif // CLL_H_INCLUDED
