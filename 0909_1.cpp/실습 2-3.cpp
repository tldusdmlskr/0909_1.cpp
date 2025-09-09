#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;

	printf("정수 두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("두 수의 합: %d\n", a + b);
	printf("두 수의 평균: %.3f\n", (a + b) / 2.0);
	return 0;
}