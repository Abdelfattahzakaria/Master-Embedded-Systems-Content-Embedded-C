/*

 *                                 Common Macros Syntax

 */

#ifndef    __Common_Macros_Syntex__

#define    __Common_Macros_Syntex__


#define    new_line                            '\0'
#define    label                               "hello world!"
#define    string                              unsigned char*
#define    octa                                8
#define    value                               5 * 6

#define    square(x)                           x * x
#define    square_optimize(x)                  (x) * (x)


#define    height                              7
#undef     height
#define    height                              9


#ifdef     height
#undef     height
#define    height                              6
#else
#define    height                              9
#endif

#if(height == 7)
#undef     height
#define    height                              6
#else
#define    height                              9
#endif


#endif
