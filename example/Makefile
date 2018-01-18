# Copyright © 2018 Bart Massey
# [This program is licensed under the "MIT License"]
# Please see the file LICENSE in the source
# distribution of this software for license terms.

CC = gcc
CFLAGS = -Wall -g -I../libcstring -L../libcstring

hello: hello.o
	$(CC) $(CFLAGS) -o hello hello.o -lcstring

clean:
	-rm -f hello.o hello
