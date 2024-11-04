#include <stdio.h>
#include <stdlib.h>

#define MY_ASSERT(x) do {\
	if (!(x)) { \
		fprintf(stdout,"조건(%s)에 부합하지 않습니다.\n", #x);\
		abort(); \
	}\
} while(0)