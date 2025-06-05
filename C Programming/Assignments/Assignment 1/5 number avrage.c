//Write a C program to input five numbers and find their average.
void main()
{
	int no = 12345;
	int r1,r2,r3,r4,r5,avrage;
	r1 = no%10;
	r2 = (no/10)%10;
	r3 = (no/100)%10;
	r4 = (no/1000)%10;
	r5 = (no/10000)%10;
	avrage = r1+r2+r3+r4+r5;
	printf("avrage is : %d",avrage);
	
}