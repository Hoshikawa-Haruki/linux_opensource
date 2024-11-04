#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "calculate.h"

int main(void)
{

    void *handle;
    int (*plus)(int, int), (*minus)(int, int), (*multiply)(int, int), (*devide)(int, int);
    char *error;

    handle = dlopen("../lib/libshared.so", RTLD_LAZY);
    // 라이브러리 로드

    if (!handle)
    {
        fputs(dlerror(), stderr);
        exit(1);
    }

    plus = dlsym(handle, "plus");
    if ((error = dlerror()) != NULL)
    {
        fprintf(stderr, "%s", error);
        exit(1);
    }
    minus = dlsym(handle, "minus");
    if ((error = dlerror()) != NULL)
    {
        fprintf(stderr, "%s", error);
        exit(1);
    }
    multiply = dlsym(handle, "multiply");
    if ((error = dlerror()) != NULL)
    {
        fprintf(stderr, "%s", error);
        exit(1);
    }
    devide = dlsym(handle, "devide");
    if ((error = dlerror()) != NULL)
    {
        fprintf(stderr, "%s", error);
        exit(1);
    }
    // 함수 포인터 설정

    int a, b;
    printf("두 수를 입력해 주세요 : ");
    scanf("%d %d", &a, &b);

    printf("plus : %d\n", (*plus)(a, b));
    printf("minus : %d\n", (*minus)(a, b));
    printf("multiply : %d\n", (*multiply)(a, b));
    printf("devide : %d\n", (*devide)(a, b));

    dlclose(handle);
    //동적 라이브러리를 닫고 리소스 해제

    return 0;
}