//Reverse the given array.
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
		printf("old array :\n");
		for(int i=0;i<10;i++)
		printf("%d  ",arr[i]);
	for(int i=0;i<(10/2);i++)
	{
		int temp = arr[i];
		arr[i] =arr[10-1-i];
		arr[10-1-i] = temp;
	}
	printf("\nnew array :\n");
	for(int i=0;i<10;i++)
		printf("%d  ",arr[i]);
}