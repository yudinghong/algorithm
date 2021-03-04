#include <stdio.h>

void printArr(int *, int);

void shellSort(int *arr, int len){
	int step = len / 2;
	int index = 0;
	int swapTemp = 0;
	int j = 0;
	for(; step > 0; step/=2){
		for(index = 0; index + step < len; index++){
			int tempMin = *(arr+index);
			int tempMinIndex = index;
			for(j = index; j < len; j += step){
				if (*(arr+j) < tempMin){
					tempMin = *(arr+j);
					tempMinIndex = j;
				}
			}
			swapTemp = *(arr+index);
			*(arr+index) = *(arr+tempMinIndex);
			*(arr+tempMinIndex) = swapTemp;
		}
	}
}

void printArr(int *arr, int len){
	int index = 0;
	for(; index < len; index++){
		printf("%d ", *(arr+index));	
	}
	printf("\n");
}

int main(){
	int arr[10] = {3,2,7,6,5,9,8,4,10,1};
	shellSort(arr, 10);
	printArr(arr, 10);
}
