#include <stdio.h>

int main() {
    // ЧАСТИНА 1: Ціле число в різних системах
    int number;

    printf("--- PART 1: Integer Numbers ---\n");
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nResults for number %d:\n", number);
    printf("Decimal (10):     %d\n", number);
    printf("Octal (8):        %o\n", number);
    printf("Hexadecimal (16): %X\n", number);

    printf("Binary (2):       ");
    if (number == 0) {
        printf("0");
    } else {
        int started = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (number >> i) & 1;
            if (bit == 1) started = 1;
            if (started) printf("%d", bit);
        }
    }
    printf("\n");

    // Відступ
    printf("\n==========================================");
    printf("\n==========================================\n\n");

   
    // ЧАСТИНА 2: Дійсні числа, символ, рядок, вказівник

    double float_num = 1234.5678;
    char ch = 'A';
    char str[] = "Hello, World!";

    printf("--- PART 2: Real Numbers and Other Types ---\n");
    printf("Fixed-point (%%f):   %f\n", float_num);
    printf("Exponential (%%e):   %e\n", float_num);
    printf("Flexible    (%%g):   %g\n", float_num);

    printf("\nOther Types:\n");
    printf("Character   (%%c):   %c\n", ch);
    printf("String      (%%s):   %s\n", str);
    printf("Pointer     (%%p):   %p\n", &str);

    //Частина 3
    printf ("\n==========================================\n13");
    char name[50];
    char email[50];
    char color[50];
    char phone[50];

    printf("=== Input Student Data ===\n");

    printf("Enter name :");
    scanf("%s", name);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("Enter Favorite Color: ");
    scanf("%s", color);

    printf("Enter Phone: ");
    scanf("%s", phone);

    // Виведення відформатованої таблиці
    printf("\n\n========================= STUDENT DATA =========================\n");
    printf("| %-1s | %-18s | %-18s | %-13s | %-13s |\n", "#", "Name", "Email", "Color", "Phone");
    printf("| %-1d | %-18s | %-18s | %-13s | %-13s |\n", 1, name, email, color, phone);
    return 0;
}