
//strdup () Duplicate the string 
#include <stdio.h>
#include <string.h>
void main (){
	char str1 []="chaitanya";
	char *sirName = strdup(str1);
	printf("%s",sirName);
}
