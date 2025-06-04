void main()
{
	double ds =15000;
	double da,ta,hra,tsalary;
	if(ds<=5000)
	{
		da = ds*0.10;
		ta = ds*0.20;
		hra = ds*0.25;
	    tsalary = ds+da+ta+hra;
		printf("total salary is : %lf",tsalary);	
	}else if(ds>=15000)
      	{
      		da = ds*0.15;
      		ta = ds*0.25;
      		hra= ds*0.30;
      		tsalary=ds+da+ta+hra;
      		printf("total salary is:%lf",tsalary);
		
	    }
}
