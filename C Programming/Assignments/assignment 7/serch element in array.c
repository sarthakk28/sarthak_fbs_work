//Search the given number in array
void main()
{
	int arr[5];
	int ch;
	
	printf("enter a numbers :");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("enter a number to find in arry :");
	scanf("%d",&ch);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==ch)
		printf("%d",arr[i]);
	}
		
}
