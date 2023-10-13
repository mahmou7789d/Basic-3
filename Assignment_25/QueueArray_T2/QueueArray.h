#ifndef QUEUEARRAY_H_INCLUDED
#define QUEUEARRAY_H_INCLUDED


typedef unsigned char           uint8 ;
typedef signed char             sint8 ;

typedef unsigned short int      uint16 ;
typedef signed short int        sint16 ;

typedef unsigned long int       uint32 ;
typedef signed long int         sint32 ;

typedef  float                  f32 ;
typedef  double                 f64 ;
typedef  long double            f96 ;


#define Size  5

static sint32 Rear;
static sint32 Front ;

static Arr[Size];

void QueueArray_InitQueue(void);

uint8 QueueArray_IsEmpty(void);

uint8 QueueArray_IsFull(void);

sint32 QueueArray_GetSize(void);

sint32 QueueArray_Peek(void);

void QueueArray_Enqueue(sint32 Val);

sint32 QueueArray_Dequeue(void );

void QueueArray_Display (void);


#endif // QUEUEARRAY_H_INCLUDED
