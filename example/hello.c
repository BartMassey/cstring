/*
 * Copyright © 2018 Bart Massey
 * [This program is licensed under the "MIT License"]
 * Please see the file LICENSE in the source
 * distribution of this software for license terms.
 */

#include <stdio.h>
#include <cstring.h>

int
main() {
    string_t h = snew("hello");
    string_t s = snew(" ");
    sappend(h, s);
    sfree(s);
    string_t w = snew("world");
    sappend(h, w);
    sfree(w);
    printf("%d %s\n", slen(h), sbytes(h));
    sfree(h);
    return 0;
}
