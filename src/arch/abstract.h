#ifndef ARCH_ABSTRACT_H
#define ARCH_ABSTRACT_H

#include <macro.h>

#ifdef __x86_64__
# include <arch/cross-x86/const.h>
# include <arch/x86_64/regs.h>
#else
# error "Unknown architecture"
#endif /* !__x86_64__ */

NORETURN void arch_abort(void);
void arch_com_putc(char);
void arch_com_puts(char const *);
void arch_init(void);

#endif /* !ARCH_ABSTRACT_H */
