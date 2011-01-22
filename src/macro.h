/* macro.h - macro interface */

#ifndef MACRO_H
#define MACRO_H

#include "h-basic.h"

#define MACRO_MAX 512

extern s16b macro__num;
extern char **macro__pat;
extern char **macro__act;

extern char *macro_modifier_chr;
extern char *macro_modifier_name[MAX_MACRO_MOD];

extern int macro_find_check(const char *pat);
extern int macro_find_exact(const char *pat);
extern int macro_find_maybe(const char *pat);
extern int macro_find_ready(const char *pat);
extern errr macro_add(const char *pat, const char *act);
extern errr macro_init(void);
extern errr macro_free(void);

#endif /* !MACRO_H */
