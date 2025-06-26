//Print alternate elements in array.
void main()
{
	int arr[10];
	
	printf("enter a numbers : ");
	
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	for(int i=0;i<10;i+=2)
	{

		printf("%d : ",arr[i]);
	}
	
}