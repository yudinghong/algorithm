#include <stdio.h>

void printArr(int*, int);
void quickSort(int* arr, int len) {
	if (len <= 1) {
		return;
	}
	int head = 0;
	int rear = len - 1;
	int reverseFlag = 0;
	int temp = 0;
	int base = *(arr + 0);
	for (; head < rear; ) {
		if (reverseFlag == 0) {
			if (*(arr + rear) < base) {
				reverseFlag = 1;
				continue;
			}
			else {
				rear--;
				continue;
			}
		}
		else {
			if (*(arr + head) > base) {
				reverseFlag = 0;
				temp = *(arr + rear);
				*(arr + rear) = *(arr + head);
				*(arr + head) = temp;
			}
			else {
				head++;
				continue;
			}
		}
		
	}
	*(arr) = *(arr + head);
	*(arr + head) = base;
	quickSort(arr, head);
	quickSort((arr + head + 1), len - head - 1);
}

void printArr(int* a, int len) {
	int i=0;
	for (; i < len; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int main() {
	int a[5] = { 3, 4, 2, 5, 1 };
	quickSort(a, 5);
	printArr(a, 5);
	return 0;
}
