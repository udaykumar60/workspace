add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
mod.o:mod.c
	gcc -c mod.c
libarith.a:mod.o mul.o add.o sub.o div.o
	ar -rcs libarith.a mod.o mul.o add.o sub.o div.o
a:test.c
	gcc test.c -o a libarith.a
cln:
	rm -rf *.o
