programs/main : source/main.c lib/libmy_perror.a
	gcc -g -o programs/main -I./header -L./lib source/main.c -lmy_perror

lib/libmy_perror.a : source/my_perror.o
	ar rcs lib/libmy_perror.a source/my_perror.o

source/my_perror.o : source/my_perror.c
	gcc -o source/my_perror.o -c source/my_perror.c

run : 
	programs/main programs/testFile.txt

clean :
	rm -f programs/main lib/libmy_perror.a source/my_perror.o