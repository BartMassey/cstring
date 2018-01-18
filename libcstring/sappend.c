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

void
sappend(string_t s, string_t t) {
    assert(slen_max - s->len >= t->len);
    s->bytes = realloc(s->bytes, s->len + t->len + 1);
    strcpy(&s->bytes[s->len], t->bytes);
    s->len += t->len;
}
