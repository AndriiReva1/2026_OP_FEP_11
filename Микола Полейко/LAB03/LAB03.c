#include <stdio.h>

void printBinary(unsigned char num) {
    for (int i = 7; i>=0; i--) {
        printf("%d", (num >> i) & 1);
    }

}
int main() {
    int a = 10;
    int b = 3;
    printf("\nTASK#1 - demonstration of arithmetic operators.\n");

    printf("\nStarting values: a = %d, b = %d\n", a, b);
    printf("Sum (a+b): %d\n", a+b);
    printf("Difference (a-b): %d\n", a - b);
    printf("Multiply: (a*b): %d\n", a * b);
    printf("Divide: (a:b): %.2f\n", (float) a / b);
    printf("Remainder: (a %% b): %d\n", a % b);

    int c = 18;
    printf("Me now: %d years, (me after birthday: %d years)\n", c++, c);
    printf("I have %d apples", c--);
    
    printf("\nTASK#2 - logic processes\n");
    
    




    return 0;
}
