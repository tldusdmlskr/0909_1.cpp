#include <stdio.h>
#define PI 3.14

int main() {
	int radius = 0;
	printf("�������� �Է��ϼ���: ");
	scanf("%d", &radius);

	printf("���� ����: %.2f\n", 2.0 * radius);
	printf("���� ����: %.2f\n", PI * radius * radius);

	return 0;
}
