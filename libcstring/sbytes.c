/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include "cstring.h"

char *
sbytes(string_t s) {
    return s->bytes;
}
