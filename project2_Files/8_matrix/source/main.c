#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    int **matrixA; // 행렬 A의 이중 포인터 선언
    int **matrixB; // 행렬 B의 이중 포인터 선언

    // 행렬의 크기 입력
    printf("행렬의 크기 n(행), m(열) n * m 입력: ");
    scanf("%d %d", &n, &m);
    
    // 행렬 A와 B의 행 메모리 동적 할당
    matrixA = (int **)malloc(n * sizeof(int*));
    matrixB = (int **)malloc(n * sizeof(int*));
    
    int i, j;
    // 각 행에 대해 열 메모리 동적 할당
    for (i = 0; i < n; i++) {
        matrixA[i] = (int*)malloc(m * sizeof(int));
        matrixB[i] = (int*)malloc(m * sizeof(int));
    }

    // 행렬 A의 값 입력
    printf("행렬 A의 값 입력 : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\n");

    // 행렬 B의 값 입력
    printf("행렬 B의 값 입력 : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("\n");

    // 두 행렬의 합 출력
    printf("두 행렬의 합 : \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%2d ", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n"); // 각 행이 끝날 때마다 줄바꿈
    }

    // 동적으로 할당한 메모리 해제
    for (i = 0; i < n; i++) {
        free(matrixA[i]);
        free(matrixB[i]);
    }
    free(matrixA);
    free(matrixB);

    return 0;
}
