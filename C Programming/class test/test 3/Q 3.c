#include <stdio.h>

void sumAlternate(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}

int main() {
    sumAlternate(1, 5); 
    return 0;
}