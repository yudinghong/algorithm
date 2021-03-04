#include <stdio.h>

#define swap(a, b) {int temp = a;a = b;b = temp;}

void printArr(int a[], int size){
  int index = 0;
  for(; index < size; index++){
    printf("%d ", a[index]);
  }
  printf("\n");
}

void bubbleSort(int a[], int size){
  int i = 0;
  int j = 0;
  for(; i < size; i++){
    for(j = 0; j < size - i - 1; j++){
      if (a[j] > a[j+1]){
        swap(a[j], a[j+1]);
      }
    }
  }
}

int main(){
  int a[5] = {3, 4, 2, 5, 1};
  printArr(a, 5);
  bubbleSort(a, 5);
  printArr(a, 5);
  return 0;
}