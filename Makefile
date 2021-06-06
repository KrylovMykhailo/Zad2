# Makefile

.PHONY: clean install unistall
all: final
.SUFFIXES: .c .o .a .so
VPATH = bin include lib src

%.o:%.c
	gcc -c src/* -I./include
%.o:%_area.c
	gcc -c src/$^
%.o:%_volume.c
	gcc -c -fPIC src/$^

cube_volume.o: cube_volume.c
square_volume.o: square_volume.c
cube_area.o: cube_area.c
square_area.o: square_area.c
main.o: main.c 


lib_area.a: cube_area.o square_area.o
	ar rs lib/$@ $^
lib_volume.so: cube_volume.o square_volume.o
	gcc $^ -shared -o lib/$@
Code2: main.o lib_area.a lib_volume.so 
	gcc -o bin/$@ $^ -Llib
final: lib_area.a lib_volume.so
	make Code2


clean:
	rm *.o lib/* bin/*
install:
	cp bin/Code2 /usr/local/bin/
uninstall:
	rm /usr/local/bin/Code2
