//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
void main()
{
	int n,i=1;
	printf("enter a number : ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d\n",n*i);
		i++;
	}
}