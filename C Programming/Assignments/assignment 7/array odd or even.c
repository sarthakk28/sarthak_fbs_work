 //Find odd and even among the numbers.
 void main()
 {
 	int arr[10];
 	
 	printf("enter a numbers :");
 	for(int i=0;i<10;i++)
 	{	
 		scanf("%d",&arr[i]);
	}
	printf("\neven numbers : ");
	for(int i=0;i<10;i++)
	{	
		if(arr[i]%2==0)
		printf("%d ,",arr[i]);	
	}
	printf("\nodd numbers : ");
	for(int i=0;i<10;i++)
	{	
		if(arr[i]%2!=0)
		
		printf("%d ,",arr[i]);	
	}
		
 }