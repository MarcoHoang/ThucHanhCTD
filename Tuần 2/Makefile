CFLAGS = -c -Gọi
CC = gcc
LIBS = -lm

tất cả : máy quét

máy quét : scanner.o reader.o charcode.o token.o error.o
	$ {CC} scanner.o reader.o charcode.o token.o error.o -o máy quét

reader.o : reader.c
	$ {CC}  $ {CFLAGS} reader.c

scanner.o : scanner.c
	$ {CC}  $ {CFLAGS} scanner.c

charcode.o : charcode.c
	$ {CC}  $ {CFLAGS} charcode.c

token.o : token.c
	$ {CC}  $ {CFLAGS} token.c

lỗi.o : error.c
	Lỗi $ {CC}  $ {CFLAGS } r.c

sạch sẽ :
	rm -f * .o * ~
