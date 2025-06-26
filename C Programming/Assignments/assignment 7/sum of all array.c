// Find sum of all numbers.

void main()
{
	int arr[5];
	int sum=0;
	printf("enter a 5 numbers : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];			
	}
	printf("%d",sum);
}