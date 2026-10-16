#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main(void)
{
// Вивести ціле число у десятковому, двійковому, вісімковому і шістнадцятковому 
// форматах. 

int numberI = 944;
printf("Decimal: %d\n", numberI);
printf("Binary: %b\n", numberI);
printf("Octal: %o\n", numberI);
printf("Hexadecimal %x\n", numberI);

// Вивести дійсне число (з дробовою частиною) у формі з 
// плаваючою комою, в експоненційній формі і в гнучкій формі 
// (специфікатор g). 
float numberF = 21.2134;
printf("Floating-point: %f\n", numberF);
printf("Exponential: %e\n", numberF);
printf("Auto: %g\n", numberF);

// Вивести символ, стрічку і вказівник.
char symbol = 'L';
char symbols [100] = "Name Danylo";
printf("Symbol: %c\n", symbol);
printf("String: %s\n", symbols);
printf("Index: %p\n", &symbol);



// 3. Написати програму котра реалізує введення кількох стрічок символів та 
// виведення їх у складі форматованого тексту (наприклад, таблиця списку 
// групи з колонками: № п/п; Прізвище, Ініціали; Ел.пошта; Улюблений 
// колір тощо).
char surname[100];
char initials[100];
char email[100];
char color[100];

printf("\nEnter surname: ");
scanf("%s", surname);
printf("Enter initials: ");
scanf("%5s", initials); 
printf("Enter email: ");
scanf("%s", email);
printf("Enter color: ");
scanf("%s", color);


printf("\n%-5s %-20s %-10s %-35s %-20s\n", "N", "Surname", "Initials", "Email", "Color");
printf("%-5d %-20s %-10s %-35s %-20s\n", 1, surname, initials, email, color);








return 0;
} 