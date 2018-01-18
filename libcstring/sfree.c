/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include <stdlib.h>
#include "cstring.h"

void
sfree(string_t s) {
    free(s->bytes);
    free(s);
}
