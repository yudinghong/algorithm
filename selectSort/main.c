#include <stdio.h>

#define swap(a, b) {int temp = a;a = b;b = temp;}

void printArr(int a[], int size){
  int index = 0;
  for(; index < size; index++){
    printf("%d ", a[index]);
  }
  printf("\n");
}

void selectSort(int a[], int size) {
  
  int i = 0;
  int j = 0;
  for(i=0; i < size; i++){
    int maxIndex = 0;
    for(j = 1; j < size-i; j++){
      if (a[j] > a[maxIndex]){
        maxIndex = j;
      }
    }
    swap(a[maxIndex], a[size - i - 1]);
  }
}

int main() {
  int a[5] = {3, 4, 2, 5, 1};
  printArr(a, 5); 
  selectSort(a, 5);
  printArr(a, 5);
  return 0;
}
