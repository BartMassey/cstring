# Copyright © 2018 Bart Massey
# [This program is licensed under the "MIT License"]
# Please see the file LICENSE in the source
# distribution of this software for license terms.

CC = gcc
CFLAGS = -O4 -Wall

OBJS = sempty.o snew.o sfree.o slen.o sbytes.o sconcat.o sappend.o

libcstring.a: $(OBJS)
	ar crs libcstring.a $(OBJS)

$(OBJS): cstring.h

clean:
	-rm -f $(OBJS) libcstring.a
