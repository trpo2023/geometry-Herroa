
run: main
	./main
main: main.c
	gcc -Wall -Werror -o main main.c