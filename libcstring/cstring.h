/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include <stdint.h>

/* String length datatype. */
typedef uint32_t slen_t;
/* Maximum length. */
static const slen_t slen_max = UINT32_MAX - 1;

struct string {
    /* Current cached string length. */
    slen_t len;
    /* Characters of null-terminated string. */
    char *bytes;
};
typedef struct string *string_t;

extern string_t sempty(void);
extern string_t snew(char *s);
extern void sfree(string_t s);
extern slen_t slen(string_t s);
extern char *sbytes(string_t s);
extern string_t sconcat(string_t s, string_t t);
extern void sappend(string_t s, string_t t);
