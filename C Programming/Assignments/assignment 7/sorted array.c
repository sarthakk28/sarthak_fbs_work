// Sort the array.
int main()
{
	int arr[10];
	printf("enter array:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("sorted array is : ");
		for(int i=0;i<9;i++)
	{
			
		for(int j=0;j<9-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
		
		
		 int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
		}
		
		}
	}
		for(int i=0;i<10;i++){
			
			printf("%d",arr[i]);
			}	
}