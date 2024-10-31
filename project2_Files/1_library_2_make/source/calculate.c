#include <stdio.h>
#include "calculate.h"

int main() {
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("plus : %d\n", plus(a, b));
	printf("minus : %d\n", minus(a, b));
	printf("multiply : %d\n", multiply(a, b));
	printf("devide :  %d\n", devide (a, b));

	return 0;
}
