/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "cstring.h"

string_t
snew(char *s) {
    /* We can't use strlen(), as we need to honor
       the maximum length. */
    slen_t n = 0;
    while (n < slen_max && s[n] != '\0')
        n++;
    assert (n < slen_max);
    string_t t = malloc(sizeof *s);
    assert(t);
    t->len = n;
    t->bytes = malloc(n + 1);
    assert(t->bytes);
    strcpy(t->bytes, s);
    return t;
}
