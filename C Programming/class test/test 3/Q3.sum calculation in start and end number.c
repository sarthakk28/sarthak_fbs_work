#include <stdio.h>
int main() {
void sumAlternate(start, end);  
 {
    int sum = 0;
    int start,end;
    printf("enter a start number :");
    scanf("%d",&start);
      printf("enter a end number :");
    scanf("%d",&end);
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}
}