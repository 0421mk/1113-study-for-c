#include <stdio.h>

/*
void SwapIntPtr(int* p1, int* p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;

	printf("*p1, *p2 : %d %d\n", *p1, *p2);
	// 값이 아니라 주소값 Swap 하는 함수
	// 복제된 p1, p2의 주소값이 바뀐 것
}

int main(void) {
	
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	
	// ptr1의 주소 : 001FFCB8
	// ptr2의 주소 : 00EFF9AC
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	return 0;
}
*/

void SwapIntPtr(int** p1, int** p2) {
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("**p1, **p2 : %d %d\n", **p1, **p2);
	// 값이 아니라 주소값 Swap 하는 함수
	// 복제된 p1, p2의 주소값이 바뀐 것
}

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);


	// ptr1의 주소 : 001FFCB8
	// ptr2의 주소 : 00EFF9AC
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	return 0;
}