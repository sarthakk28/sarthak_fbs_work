void main()
{
	int hr; //=1;
	int mi; //= 25;
	int se,tseconds;
	printf("enter hours :minutes:second :");
	scanf("%d:%d:%d",&hr,&mi,&se);
	tseconds=hr*60*60+mi*60+se;
	printf("total second is : %d",tseconds);
	
}