/* 
 * 5장 디버깅과 오류 처리
 * 파일 이름: perror_use.c (예제)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]) 
{ 
    FILE *f;

    if (argc < 2) { 
        printf("Usage: perror_use <filename>\n");  // 파일 이름이 없을 경우
        exit(1); 
    } 

    if ((f = fopen(argv[1], "r")) == NULL) { 
        perror("fopen");  // 오류 메시지 출력. perror(NULL)로 대체할 수 있음
        exit(1); 
    } 

    printf("Opened the file \"%s\" successfully.\n", argv[1]);  // 파일 열림 성공 메시지
    fclose(f);  // 파일 닫기
    return 0;
}

