//Find factorial of given number.
//Input: n = 5
//Output: 120
void main()
{
	int no;
	int rem;
	
	printf("enter a number :");
	scanf("%d",&no);
		rem=no%10;
		int fact=1;
		while(rem>=1)
		{
			fact=fact*rem;
			rem--;			
		}
		printf("%d",fact);		
}