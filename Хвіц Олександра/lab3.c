#include <stdio.h>
int main() {
int num = 255;
printf("1. Ціле число 255 у різних системах:\n");
printf("Десяткова: %d\n", num);
printf("Вісімкова: %o\n", num);
printf("Шістнадцяткова: %x\n", num);

double d_num = 123.456;
printf("\n2. Дійсне число 123.456:\n");
printf("З плаваючою комою (%%f): %f\n", d_num);
printf("Експоненційна форма (%%e): %e\n", d_num);
printf("Гнучка форма (%%g): %g\n", d_num);

char symbol = 'A';
// виводить один символ
char str[] = "Привіт";
printf("\n3. Інші типи даних:\n");
printf("Символ (%%c): %c\n", symbol);//введення на екран текста
//підставити сам символ наприклад А
printf("Стрічка (%%s): %s\n", str);
printf("Вказівник (%%p): %p\n\n", (void*)&num);//це адресса змінної nun у пам комп

// ==========================================
// ЧАСТИНА 2: Виведення таблиці (дані вписані)
// ==========================================
printf("--- ЧАСТИНА 2: Таблиця студентів ---\n\n");

int id = 1;
char surname[] = "Oleksandra";
// cтворює текстові змінні з данними
char initials[] = "H.O";
char email[] = "oleksandrahvic@gmail.com";
char color[] = "green";

printf("--- Таблиця студентів ---\n\n");

printf("N\tSurname\t\tInitials\tEmail\t\t\tColor\n");
printf("------------------------------------------------------------\n");
printf("1\tOleksandra\tH.O\t\toleksandrahvic@gmail.com\tgreen\n");
printf("------------------------------------------------------------\n");

return 0;
}
