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
sconcat(string_t s, string_t t) {
    assert(slen_max - s->len >= t->len);
    string_t u = malloc(sizeof *s);
    assert(u);
    u->len = s->len + t->len;
    u->bytes = malloc(u->len);
    assert(u->bytes);
    strcpy(u->bytes, s->bytes);
    strcpy(&u->bytes[s->len], t->bytes);
    return u;
}
