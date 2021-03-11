#include <stdio.h>

void printArr(int*, int);
int Partition(int a[],int p,int r){
  int i=p,j=r+1;
  int x=a[p];
  int tramp;
  while(1){
    while(a[++i]<x&&i<r);
    while(a[--j]>x);
    if(i>=j) break;
    tramp=a[i];
    a[i]=a[j];
    a[j]=tramp;
  }
  a[p]=a[j];
  a[j]=x;
  return j;
}

void QuickSort(int a[],int p,int r){
  if(p < r){
    int q=Partition(a,p,r);
    QuickSort(a,p,q-1);
    QuickSort(a,q+1,r);
  }
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
	quickSort(a, 0, 9);
	printArr(a, 5);
	return 0;
}
