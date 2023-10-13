#ifndef QUEUECIRCULARARRAY_H_INCLUDED
#define QUEUECIRCULARARRAY_H_INCLUDED

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

static sint32 SizeOfArr=0;

static Arr[Size];

void InitQueue(void);

sint32 GetSize(void);

sint32 Peek(void);

void Enqueue(sint32 Val);

sint32 Dequeue(void );

void Display (void);

#endif // QUEUECIRCULARARRAY_H_INCLUDED
