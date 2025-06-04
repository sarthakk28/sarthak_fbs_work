int main() {
    long long int no, reversed;
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;

    printf("Enter a 15-digit number:\n ");
    scanf("%lld", &no);

    r1  = no % 10;
    r2  = (no / 10) % 10;
    r3  = (no / 100) % 10;
    r4  = (no / 1000) % 10;
    r5  = (no / 10000) % 10;
    r6  = (no / 100000) % 10;
    r7  = (no / 1000000) % 10;
    r8  = (no / 10000000) % 10;
    r9  = (no / 100000000) % 10;
    r10 = (no / 1000000000) % 10;
    r11 = (no / 10000000000) % 10;
    r12 = (no / 100000000000) % 10;
    r13 = (no / 1000000000000) % 10;
    r14 = (no / 10000000000000) % 10;
    r15 = (no / 100000000000000) % 10;

    reversed = 
        (long long int)r1  * 100000000000000 +
        (long long int)r2  * 10000000000000  +
        (long long int)r3  * 1000000000000   +
        (long long int)r4  * 100000000000    +
        (long long int)r5  * 10000000000     +
        (long long int)r6  * 1000000000      +
        (long long int)r7  * 100000000       +
        (long long int)r8  * 10000000        +
        (long long int)r9  * 1000000         +
        (long long int)r10 * 100000          +
        (long long int)r11 * 10000           +
        (long long int)r12 * 1000            +
        (long long int)r13 * 100             +
        (long long int)r14 * 10              +
        (long long int)r15;

    printf("Reversed number is: %lld\n", reversed);

    return 0;
}