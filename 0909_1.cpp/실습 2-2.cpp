#include <stdio.h>

int main() {

	int celsius = 0;
	float fahrenheit = 0;

	printf("���� �µ��� �Է��ϼ���:");
	scanf("%d", &celsius);
	fahrenheit = (celsius * 9 / 5.0) + 32;
	printf("���� %d ���� ȭ�� %.2f���Դϴ�.\n", celsius, fahrenheit);

	return 0;

}