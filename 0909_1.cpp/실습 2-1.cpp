#include <stdio.h>

int main() {
	int grade = 0;
	int age = 0;

	printf("학년을 입력하세요: ");
	scanf("%d", &grade);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("이화여대 %d학년이며, 나이는 %d살입니다.\n", grade, age);

	return 0;
}

//주석 처리: ctrl + k + c
//주석 해제: ctrl + k + u