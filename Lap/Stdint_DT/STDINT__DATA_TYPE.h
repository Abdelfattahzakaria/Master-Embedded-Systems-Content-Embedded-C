/*

 *                                  stdint data types

 */

#ifndef __STDINT__DATA_TYPE__
#define __STDINT__DATA_TYPE__

#include <stdint.h>

#define      CPU_TYPE                                CPU_TYPE_32
#define      BIT_ORDER                               MSB_FIRST
#define      BYTE_ORDER                              HIGH_BYTE_FIRST

#ifndef       FALSE
#define       FALSE                                   (boolean)false
#endif

#ifndef       TRUE
#define       TRUE                                    (boolean)true
#endif

typedef       _Bool                                  boolean;
typedef       int8_t                                 sint8_t;
typedef       uint8_t                                uint8_t;
typedef       int16_t                                sint16_t;
typedef       uint16_t                               uint16_t;
typedef       int32_t                                sint32_t;
typedef       uint32_t                               uint32_t;
typedef       int64_t                                sint64_t;
typedef       uint64_t                               uint64_t;

typedef       volatile int8_t                        vsint8_t;
typedef       volatile uint8_t                       vuint8_t;
typedef       volatile int16_t                       vsint16_t;
typedef       volatile uint16_t                      vuint16_t;
typedef       volatile int32_t                       vsint32_t;
typedef       volatile uint32_t                      vuint32_t;
typedef       volatile int64_t                       vsint64_t;
typedef       volatile uint64_t                      vuint64_t;


#endif


