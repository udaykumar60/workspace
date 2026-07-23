Target = App

cc = gcc

cflags = -c -fpic

install = /usr/bin

$(Target) : test.c libarith.so Arith.h
	$(cc) test.c -o App ./libarith.so
	@echo "App Binary built successfully"

add.o: add.c
	$(cc) $(cflags) add.c

sub.o: sub.c
	$(cc) $(cflags) sub.c
	
mul.o: mul.c
	$(cc) $(cflags) mul.c

div.o: div.c
	$(cc) $(cflags) div.c

mod.o: mod.c
	$(cc) $(cflags) mod.c

clean:
	rm -rf *.o App
