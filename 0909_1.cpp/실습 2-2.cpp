#include <stdio.h>

int main() {

	int celsius = 0;
	float fahrenheit = 0;

	printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
	scanf("%d", &celsius);
	fahrenheit = (celsius * 9 / 5.0) + 32;
	printf("¼·¾¾ %d µµ´Â È­¾¾ %.2fµµÀÔ´Ï´Ù.\n", celsius, fahrenheit);

	return 0;

}