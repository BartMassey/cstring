/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include <assert.h>
#include <stdlib.h>
#include "cstring.h"

string_t
sempty(void) {
    string_t s = malloc(sizeof *s);
    assert(s);
    s->len = 0;
    s->bytes = malloc(1);
    assert(s->bytes);
    *s->bytes = '\0';
    return s;
}
