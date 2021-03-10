#include <stdio.h>

#define swap(a, b) {int temp = a;a = b;b = temp;}
#define print(arr, len) {for(int i=0; i<len; i++){printf("%d ", arr[i]);}printf("\n");}

void insertSort(int arr[5], int len) {
  for(int i = 1; i < len; i++){
    for(int j = i; j > 0; j--){
      if (arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
      }
      else {
        break;
      }
    }
  }
}

int main(){
  int a[5] = {3, 1, 2, 5, 4};
  print(a, 5);
  insertSort(a, 5);
  print(a, 5);
  return 0;
}
