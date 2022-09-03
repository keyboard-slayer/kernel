#ifndef LIBC_EXT_MACRO_H
#define LIBC_EXT_MACRO_H

#define PACKED						__attribute__((packed))
#define NORETURN					__attribute__((noreturn))
#define USED						__attribute__((used))
#define UNREACHABLE					__builtin_unreachable()
#define GENERATE_ENUM(ENUM)			ENUM,
#define GENERATE_STRING(STRING)		#STRING,
#define ALIGN_DOWN(__addr, __align) ((__addr) & ~((__align) -1))
#define ALIGN_UP(__addr, __align)	(((__addr) + (__align) -1) & ~((__align) -1))

#endif /* !LIBC_EXT_MACRO_H */
