void main()
{
	int arr[5],brr[5],crr[10];
	
	
	printf("first array  :");
	for( int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	
	printf("second array  :");
	for( int i=0;i<5;i++)
		scanf("%d",&brr[i]);
	
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i];
	}
	
	for(int j=0;j<5;j++)
	{
		crr[5+j]=brr[j];
	}
	
	for(int i=0;i<10;i++)
	{
	printf("%d  ",crr[i]);
	}
	
	

}