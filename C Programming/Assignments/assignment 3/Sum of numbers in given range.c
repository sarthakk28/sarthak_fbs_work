//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
void main()
{
	int sum,start,end;
	printf("enter starting number :");
	scanf("%d",&start);
	printf("enter ending number :");
	scanf("%d",&end);
	if(end<start)
	    {
		   printf("invalid");
		}
		else{
		
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("%d",sum);
}
	}