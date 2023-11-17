#include<stdio.h>

int main(void) {
	int i;

	char moji;

	printf("文字を入れてね=");
	scanf_s("%c", &moji);

	if ((moji >= 'a') && (moji <= 'z')) {
		printf("\n");
	}
	else if ((moji >= 'A') && (moji <= 'Z'))
	{
		printf("含まれている\n");
	}
	else {
		printf("その他の文字\n");
	}

	return 0;
}

