#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;

	printf("���� �� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	printf("�� ���� ��: %d\n", a + b);
	printf("�� ���� ���: %.3f\n", (a + b) / 2.0);
	return 0;
}