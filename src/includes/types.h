#ifndef _TYPES_H_
#define _TYPES_H_

/*
 * Basic fixed-width integer types
 * (Do NOT rely on stdint.h in freestanding environments)
 */

typedef unsigned char      uint8_t;
typedef signed char        int8_t;

typedef unsigned short     uint16_t;
typedef signed short       int16_t;

typedef unsigned int       uint32_t;
typedef signed int         int32_t;

typedef unsigned long long uint64_t;
typedef signed long long   int64_t;

/*
 * Architecture-dependent types
 * Adjust if targeting non-x86_64
 */

typedef uint64_t size_t;
typedef int64_t  ssize_t;

typedef uint64_t uintptr_t;
typedef int64_t  intptr_t;

/* Boolean type */

#ifdef __cplusplus
typedef bool bool_t;
#else
typedef enum {
    false = 0,
    true  = 1
} bool_t;
#endif

/*
 * Common OS types
 */

typedef uint64_t phys_addr_t;
typedef uint64_t virt_addr_t;

typedef uint32_t pid_t;
typedef int32_t  errno_t;

/*
 * NULL definition
 */

#ifndef NULL
#define NULL ((void*)0)
#endif

/*
 * Compiler attributes
 */

#define PACKED      __attribute__((packed))
#define ALIGNED(x)  __attribute__((aligned(x)))
#define NORETURN    __attribute__((noreturn))
#define UNUSED      __attribute__((unused))

#endif /* _TYPES_H_ */

// EXAMPLE
// #include "types.h"

// struct PACKED gdt_entry {
//     uint16_t limit_low;
//     uint16_t base_low;
//     uint8_t  base_mid;
//     uint8_t  access;
//     uint8_t  granularity;
//     uint8_t  base_high;
// };
