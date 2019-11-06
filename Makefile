all: main.o list.o
	gcc main.o list.o -o programa
main.o: main.c 
	gcc main.c -c
list.o: list.c
	gcc list.c -c
run:
	./programa
clean:
	rm -rf programa *.o
