
run: main
	./main
main: main.c
	gcc -Wall -o main main.c