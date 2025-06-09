//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
void main()
{
	int no,i=1,sum=0;
	printf("enter a number :");
	scanf("%d",&no);
	while(i<=no/2)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(no==sum)
	printf("number is perfect");
	else
	printf("number is not perfect");
}