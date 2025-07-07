//Sort the array

#include <stdio.h>
#include <stdlib.h>
void acceptArray (int*,int);
void sortArray (int*,int);
void sortedArray (int*,int);
void main () {
	int *arr;
	int size;
	printf("Enter the number");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter the elements ");
	acceptArray (arr,size);
	sortArray (arr,size);
	sortedArray (arr,size);
	free(arr);
}

void acceptArray (int *ptr,int size) {
	for (int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void sortArray (int *ptr,int size) {
	int temp;
	for (int i=0; i<size; i++) {
		for (int j=i+1; j<size; j++) {
			if (ptr[i]>ptr[j]) {
				temp=ptr[i];
				ptr[i]=	ptr[j];
				ptr[j]=temp;
			}
		}
	}
}

void sortedArray (int *ptr,int size) {
	printf("[");
	for (int i=0; i<size; i++) {
		printf("%d,",ptr[i]);
	}
	printf("]");
}
