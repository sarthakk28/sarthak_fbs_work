
#include <stdio.h>
//HR (id, name, salary, commission)
typedef struct HR {
	int id;
	char name [20];
	int salary;
	int commission;
}HR;
void main (){
	HR hrName;
	hrName.commission=10;
	printf("Enter the id:\n");
	scanf("%d",&hrName.id);
	printf("Enter the name:\n");
	scanf("%s",hrName.name);
	printf("Enter the salary:\n");
	scanf("%d",&hrName.salary);
	
	printf("id : %d\n",hrName.id);
	printf("Name : %s\n",hrName.name);
	printf("Salary : %d\n",hrName.salary);
	int res;
	printf("After commission %d\n",res=(hrName.salary/100*hrName.commission)+hrName.salary);
}
