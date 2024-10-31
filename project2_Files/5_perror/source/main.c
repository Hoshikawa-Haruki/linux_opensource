/* 
 * 과제 5번
 * my_perror() 함수를 구현하여 대체
 */

#include <stdio.h>
#include "my_perror.h"

int main(int argc, char *argv[])
{
	FILE *f;

	if (argc < 2)
	{
		printf("입력된 파일명이 없습니다.\n");
		exit(1);
	}

	if ((f = fopen(argv[1], "r")) == NULL)
	{
		my_perror("fopen");
		exit(1);
	}

	printf("다음 파일을 엽니다. \"%s\". \n", argv[1]);
	fclose(f); // 파일 닫기

	return 0;
}
