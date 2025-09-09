#include <stdio.h>
#define PI 3.14

int main() {
	int radius = 0;
	printf("반지름을 입력하세요: ");
	scanf("%d", &radius);

	printf("원의 지름: %.2f\n", 2.0 * radius);
	printf("원의 넓이: %.2f\n", PI * radius * radius);

	return 0;
}
