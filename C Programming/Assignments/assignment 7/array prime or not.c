// Accept array and print only prime numbers of array.
void main()
{
	int arr[10];
	int i,j;
	printf("enter a 10 number :");
	
	for( i=0;i<10;i++)
		scanf("%d",&arr[i]);
		
	for(int i=0;i<10;i++)
	{
	
		if(arr[i]<2)
		continue;
	  
	}
	int status=0;
	for(j=2;j<=arr[i]/2;j++,i++)
	{
		if(arr[i]%j==0)
		{
			status=0;
			break;
		}
		if(status==0)
	{
		printf("%d",arr[i]);
	}
	else
	{
		printf("invalid");
	}
	}
	}	
