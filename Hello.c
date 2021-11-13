#include <stdio.h>

int checkChar(char ch) {

	if (ch >= 65 && ch <= 90) {
		ch += 32;
	}
	else if (ch >= 97 && ch <= 122) {
		ch -= 32;
	}
	else {
		return -1;
	}

	return ch;
}

int main(void) {

	int ch;
	ch = getchar();
	ch = checkChar(ch);

	if (ch == -1) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
		return -1;
	}
	
	putchar(ch);

	return 0;

}