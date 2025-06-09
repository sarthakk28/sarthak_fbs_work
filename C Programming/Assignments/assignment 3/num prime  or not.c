//Check the given number is prime or not.
//Input: n = 7
//Output: Prime
void main()
{
	int n,i=2,status=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		status=1;
		break;	
		}
		i++;
		
	}
	if(status==0)
		printf("prime");
		else
		printf("not prime");
	
}

