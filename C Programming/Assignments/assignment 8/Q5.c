//Print alternate elements in array.
#include <stdio.h>
void store (int*,int);
void display (int*,int);
void main (){
	int arr[10];
	printf("Enter the elements\n");
	store (arr,10);
	display (arr,10);
}
void store (int *ptr,int size) {
	for (int i=0; i<size; i++)
		scanf("%d",&ptr [i]);
}

void display (int *ptr,int size) {
	printf("[");
	for (int i=0; i<size; i=i+2)
		printf("%d,",ptr[i]);
	printf("\b]\n");
}