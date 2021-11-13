#include <stdio.h>

/*
void SwapIntPtr(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;

	printf("*p1, *p2 : %d %d\n", *p1, *p2);
	// ���� �ƴ϶� �ּҰ� Swap �ϴ� �Լ�
	// ������ p1, p2�� �ּҰ��� �ٲ� ��
}

int main(void) {
	
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	
	// ptr1�� �ּ� : 001FFCB8
	// ptr2�� �ּ� : 00EFF9AC
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	return 0;
}
*/

void SwapIntPtr(int** p1, int** p2) {
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("**p1, **p2 : %d %d\n", **p1, **p2);
	// ���� �ƴ϶� �ּҰ� Swap �ϴ� �Լ�
	// ������ p1, p2�� �ּҰ��� �ٲ� ��
}

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);


	// ptr1�� �ּ� : 001FFCB8
	// ptr2�� �ּ� : 00EFF9AC
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	return 0;
}