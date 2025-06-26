// Find minimum and maximum number in array. 

void main()
{
	int arr[5];
	int min,max;
	
	printf("enter a numbers to find minimum or maximum : ");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	min = max = arr[0];
	for(int i=1;i<5;i++)
	{
		 
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    
	}
	printf("minimum = %d\n",min);
	printf("maximum = %d",max);
	
	
}
