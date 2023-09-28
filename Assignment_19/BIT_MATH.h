


#define SET_BIT(VAR, BIT_NUM) \
    do { \
        if ((BIT_NUM) >= 0 && (BIT_NUM) < sizeof(VAR) * 8) { \
            (VAR) |= (1U << (BIT_NUM)); \
        } else { \
            /* Handle invalid BIT_NUM here, e.g., by logging an error. */ \
        } \
    } while (0)

#define CLR_BIT(VAR, BIT_NUM) \
    do { \
        if ((BIT_NUM) >= 0 && (BIT_NUM) < sizeof(VAR) * 8) { \
            (VAR) &= ~(1U << (BIT_NUM)); \
        } else { \
            /* Handle invalid BIT_NUM here, e.g., by logging an error. */ \
        } \
    } while (0)

#define TOG_BIT(VAR, BIT_NUM) \
    do { \
        if ((BIT_NUM) >= 0 && (BIT_NUM) < sizeof(VAR) * 8) { \
            (VAR) ^= (1U << (BIT_NUM)); \
        } else { \
            /* Handle invalid BIT_NUM here, e.g., by logging an error. */ \
        } \
    } while (0)

#define GET_BIT(VAR, BIT_NUM) \
    (((BIT_NUM) >= 0 && (BIT_NUM) < sizeof(VAR) * 8) ? (((VAR) >> (BIT_NUM)) & 1U) : 0U)





// In these updated macros:

// The macros are wrapped in do { ... } while (0) to allow them to be used as a single statement.

// Each macro checks whether the BIT_NUM is within the valid range (0 to the number of bits in VAR - 1) 
// before performing the operation.

// If BIT_NUM is out of range, you can add appropriate error-handling code, 
// such as logging an error message or taking other actions as needed. In the provided code, 
// comments indicate where you can add error handling.

// These checks help ensure that you won't accidentally access or modify bits outside the valid range of the data type,
// reducing the risk of undefined behavior.


// -----------------------------------------------------------------

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef BIT_MATH_H
#define BIT_MATH_H

#include <stdint.h> // Include for uint8_t
#include <stdio.h>  // Include for printf

typedef union
{
    struct
    {
        char B0 : 1;
        char B1 : 1;
        char B2 : 1;
        char B3 : 1;
        char B4 : 1;
        char B5 : 1;
        char B6 : 1;
        char B7 : 1;
    } BitAccess;
    char ByteAccess;
} Register;

#define SET_BIT(VAR, BIT_NUM) (VAR.ByteAccess |= (1U << (BIT_NUM - 1)))

#define CLR_BIT(VAR, BIT_NUM) (VAR.ByteAccess &= ~(1U << (BIT_NUM - 1)))

#define TOG_BIT(VAR, BIT_NUM) (VAR.ByteAccess ^= (1U << (BIT_NUM - 1)))

#define GET_BIT(VAR, BIT_NUM) ((VAR.ByteAccess >> (BIT_NUM - 1)) & 0x01)

#endif


#include <stdio.h>
#include "bit_math.h"

int main() {
    Register reg;
    reg.ByteAccess = 0x00; // Initialize the byte to all zeros

    // Test setting, clearing, and toggling bits
    SET_BIT(reg, 3); // Set bit 3
    CLR_BIT(reg, 5); // Clear bit 5
    TOG_BIT(reg, 2); // Toggle bit 2

    // Test getting bits
    uint8_t bit3 = GET_BIT(reg, 3);
    uint8_t bit5 = GET_BIT(reg, 5);
    uint8_t bit2 = GET_BIT(reg, 2);

    // Print the result
    printf("Byte Value: 0x%02X\n", reg.ByteAccess);
    printf("Bit 3: %d\n", bit3);
    printf("Bit 5: %d\n", bit5);
    printf("Bit 2: %d\n", bit2);

    return 0;
}


#include <stdio.h>
#include "STD_Types.h"

int main() {
    Register reg;
    reg.ByteAccess = 0x00;


    SET_BIT(reg, 3);


    printf("Byte Value: 0x%02X\n", reg.ByteAccess);
    printf("Bit 0: %d\n", GET_BIT(reg, 0));
    printf("Bit 1: %d\n", GET_BIT(reg, 1));
    printf("Bit 2: %d\n", GET_BIT(reg, 2));
    printf("Bit 3: %d\n", GET_BIT(reg, 3));
    printf("Bit 4: %d\n", GET_BIT(reg, 4));
    printf("Bit 5: %d\n", GET_BIT(reg, 5));
    printf("Bit 6: %d\n", GET_BIT(reg, 6));
    printf("Bit 7: %d\n", GET_BIT(reg, 7));

    return 0;
}

#include <stdio.h>
#include "STD_Types.h"

int main() {
    Register reg;
    reg.ByteAccess = 0x00;
    SET_BIT(reg, 1);
    SET_BIT(reg, 2);
    SET_BIT(reg, 3);
    SET_BIT(reg, 4);

    printf("Byte Value: 0x%02X\n", reg.ByteAccess);
    printf("Bit 0: %d\n", reg.BitAccess.B0);
    printf("Bit 1: %d\n", reg.BitAccess.B1);
    printf("Bit 2: %d\n", reg.BitAccess.B2);
    printf("Bit 3: %d\n", reg.BitAccess.B3);
    printf("Bit 4: %d\n", reg.BitAccess.B4);
    printf("Bit 5: %d\n", reg.BitAccess.B5);
    printf("Bit 6: %d\n", reg.BitAccess.B6);
    printf("Bit 7: %d\n", reg.BitAccess.B7);

    return 0;
}
Byte Value: 0x0F
Bit 0: -1
Bit 1: -1
Bit 2: -1
Bit 3: -1
Bit 4: 0
Bit 5: 0
Bit 6: 0
Bit 7: 0










#include <stdio.h>
#include "bit_math.h"

int main() {
    Register controlRegister;
    controlRegister.ByteAccess = 0x00; // Initialize the control register to all zeros

    // Turn on specific flags in the control register
    SET_BIT(controlRegister, 1);  // Enable Flag 1
    SET_BIT(controlRegister, 4);  // Enable Flag 4
    SET_BIT(controlRegister, 7);  // Enable Flag 7

    // Check if specific flags are set
    uint8_t flag1Enabled = GET_BIT(controlRegister, 1);
    uint8_t flag2Enabled = GET_BIT(controlRegister, 2);
    uint8_t flag7Enabled = GET_BIT(controlRegister, 7);

    // Print the control register value and flag statuses
    printf("Control Register Value: 0x%02X\n", controlRegister.ByteAccess);
    printf("Flag 1 Enabled: %d\n", flag1Enabled);
    printf("Flag 2 Enabled: %d\n", flag2Enabled);
    printf("Flag 7 Enabled: %d\n", flag7Enabled);

    // Turn off specific flags in the control register
    CLR_BIT(controlRegister, 1);  // Disable Flag 1
    CLR_BIT(controlRegister, 4);  // Disable Flag 4

    // Check if specific flags are set after clearing
    flag1Enabled = GET_BIT(controlRegister, 1);
    uint8_t flag4Enabled = GET_BIT(controlRegister, 4);

    // Print flag statuses after clearing
    printf("Flag 1 Enabled (after clearing): %d\n", flag1Enabled);
    printf("Flag 4 Enabled (after clearing): %d\n", flag4Enabled);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef BIT_MATH_H
#define BIT_MATH_H

typedef unsigned char uint8;

typedef union
{
    struct
    {
        uint8 B0 : 1;
        uint8 B1 : 1;
        uint8 B2 : 1;
        uint8 B3 : 1;
        uint8 B4 : 1;
        uint8 B5 : 1;
        uint8 B6 : 1;
        uint8 B7 : 1;
    } BitAccess;
    uint8 ByteAccess;
} Register;

#define SET_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = 1)

#define CLR_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = 0)

#define TOG_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = !(VAR.BitAccess.B ## BIT_NUM))

#define GET_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM)

#endif
/*
The provided code defines a set of macros and data structures for manipulating individual bits in an 8-bit variable. 
It's a common practice in embedded systems programming to access and modify individual bits in hardware registers, 
which often correspond to specific configuration settings or status flags.

Here's a detailed explanation of each part of the code:

1. **Header Guards**: 
   #ifndef BIT_MATH_H
   #define BIT_MATH_H

   These lines prevent the contents of the header file from being included more than once in a single compilation unit. 
   It's a standard practice in C and C++ to use header guards to prevent issues with multiple inclusions.

2. **Data Type Definitions**:
   typedef unsigned char uint8;

   This line defines a new data type `uint8` as an alias for `unsigned char`. 
   It's a common practice to use such typedefs to improve code readability and portability.

3. **Bit Access Union**:
   typedef union
   {
       struct
       {
           uint8 B0 : 1;
           uint8 B1 : 1;
           uint8 B2 : 1;
           uint8 B3 : 1;
           uint8 B4 : 1;
           uint8 B5 : 1;
           uint8 B6 : 1;
           uint8 B7 : 1;
       } BitAccess;
       uint8 ByteAccess;
   } Register;

   This code defines a union called `Register`, which has two members: `BitAccess` and `ByteAccess`. 
   
   - `BitAccess` is a structure with eight individual bit fields (B0 to B7), each one bit wide. 
      These bit fields represent the individual bits of an 8-bit value.
   - `ByteAccess` is a `uint8` variable that provides access to the entire 8-bit value.

   This union allows you to access the 8-bit value either as a whole (`ByteAccess`) or manipulate its individual bits (`BitAccess`).

4. **Bit Manipulation Macros**:
   #define SET_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = 1)
   #define CLR_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = 0)
   #define TOG_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM = !(VAR.BitAccess.B ## BIT_NUM))
   #define GET_BIT(VAR, BIT_NUM) (VAR.BitAccess.B ## BIT_NUM)
   
   These macros provide convenient ways to manipulate individual bits in an `Register` variable:
   
   - `SET_BIT(VAR, BIT_NUM)`: Sets the specified bit (`BIT_NUM`) to 1.
   - `CLR_BIT(VAR, BIT_NUM)`: Clears (sets to 0) the specified bit (`BIT_NUM`).
   - `TOG_BIT(VAR, BIT_NUM)`: Toggles (inverts) the specified bit (`BIT_NUM`).
   - `GET_BIT(VAR, BIT_NUM)`: Retrieves the value (0 or 1) of the specified bit (`BIT_NUM`).

   The macros use token concatenation (`##`) to concatenate the bit number (`BIT_NUM`) with the appropriate bit field (`B0`, `B1`, etc.) for bit manipulation.

5. **Header Guard Closing Directive**:
   #endif
   This line closes the header guard, indicating the end of the header file.

In summary, this code defines a set of macros and a union that allow for convenient manipulation of individual bits in an 8-bit variable. 
It's commonly used in embedded systems and low-level programming for configuring hardware registers and dealing with binary flags.
*/


#include <stdio.h>
#include "STD_Types.h"

int main() {
    Register reg;
    reg.ByteAccess = 0x00;
    SET_BIT(reg, 1);
    SET_BIT(reg, 2);
    SET_BIT(reg, 3);
    SET_BIT(reg, 4);

    printf("Byte Value: 0x%02X\n", reg.ByteAccess);
    printf("Bit 0: %d\n", reg.BitAccess.B0);
    printf("Bit 1: %d\n", reg.BitAccess.B1);
    printf("Bit 2: %d\n", reg.BitAccess.B2);
    printf("Bit 3: %d\n", reg.BitAccess.B3);
    printf("Bit 4: %d\n", reg.BitAccess.B4);
    printf("Bit 5: %d\n", reg.BitAccess.B5);
    printf("Bit 6: %d\n", reg.BitAccess.B6);
    printf("Bit 7: %d\n", reg.BitAccess.B7);

    return 0;
}
Byte Value: 0x0F
Bit 0: 1
Bit 1: 1
Bit 2: 1
Bit 3: 1
Bit 4: 0
Bit 5: 0
Bit 6: 0
Bit 7: 0



#include <stdio.h>
#include "STD_Types.h"

int main() {
    Register reg;
    reg.ByteAccess = 0x00;


    SET_BIT(reg, 3);
    CLR_BIT(reg, 5);
    TOG_BIT(reg, 2);


    uint8 bit3 = GET_BIT(reg, 3);
    uint8 bit5 = GET_BIT(reg, 5);
    uint8 bit2 = GET_BIT(reg, 2);


    printf("Byte Value: 0x%02X\n", reg.ByteAccess);
    printf("Bit 3: %d\n", bit3);
    printf("Bit 5: %d\n", bit5);
    printf("Bit 2: %d\n", bit2);

    return 0;
}





/*
When using these macros to manipulate bits in shared memory or hardware registers, it's crucial to take precautions to prevent race conditions and ensure proper synchronization. 
Here are some guidelines on how to do that:

1. **Use Atomic Operations**: When working with shared memory or hardware registers, consider using atomic operations provided by your platform or programming language.
 Atomic operations ensure that read-modify-write operations on the bits are performed atomically, without interruption from other threads or processes.

2. **Use Appropriate Synchronization Mechanisms**: If atomic operations are not available or suitable for your use case, 
use synchronization mechanisms such as mutexes or semaphores to protect access to shared memory or hardware registers. 
Before accessing the bits, acquire the lock, perform the operation, and release the lock.


   // Example using a mutex
   #include <pthread.h>

   pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

   pthread_mutex_lock(&mutex);
   // Use the macros to manipulate bits in shared memory or hardware registers
   SET_BIT(sharedVar, bitNum);
   pthread_mutex_unlock(&mutex);
   

3. **Document Proper Usage**: Clearly document how these macros should be used in your codebase, especially when dealing with shared memory or hardware registers. 
Document any synchronization requirements and potential race conditions to ensure that other developers are aware of how to use these macros correctly.

4. **Test and Verify**: Thoroughly test and verify the behavior of your code, especially in multi-threaded or multi-process scenarios. 
Use testing frameworks and tools designed for concurrency testing to catch any synchronization issues.

5. **Consider Memory Barriers**: In some cases, you may need to use memory barriers or 
memory fencing instructions to ensure proper ordering of memory operations, especially when working with hardware registers.
The specifics of memory barriers will depend on your platform and compiler.

6. **Avoid Concurrent Writes**: If possible, design your system in a way that minimizes concurrent writes to the same memory locations or hardware registers. 
This can simplify synchronization requirements and reduce the potential for race conditions.

7. **Follow Hardware Documentation**: When working with hardware registers, follow the documentation provided by the hardware manufacturer. 
It often contains information about synchronization and access requirements specific to the hardware.

Remember that the exact approach you take will depend on your specific use case, the platform you're working on, 
and the synchronization mechanisms available to you. Always prioritize safety and correctness 
when manipulating bits in shared memory or hardware registers to avoid race conditions and ensure proper synchronization.
*/




