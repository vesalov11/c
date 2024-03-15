#include <stdio.h>

int main() {
/*

1
    int a, b, c;
    printf("Въведете три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { a = a + b; b = a - b; a = a - b; }
    if (b > c) { b = b + c; c = b - c; b = b - c; }
    if (a > b) { a = a + b; b = a - b; a = a - b; }

    printf("Числата подредени по големина: %d, %d, %d\n", a, b, c);


2


    double num, max = -9999999, min = 9999999, sum = 0;
    int count = 0;

    printf("Въведете числа (за край на въвеждането въведете 0):\n");

    while (1) {
        scanf("%lf", &num);
        if (num == 0)
            break;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
        sum += num;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Най-голямото число: %.2lf\n", max);
        printf("Най-малкото число: %.2lf\n", min);
        printf("Средната стойност: %.2lf\n", average);
        printf("Разлика между най-голямото и най-малкото число: %.2lf\n", max - min);
    } else {
        printf("Не са въведени числа!\n");
    }



3
*/
#include <stdio.h>

void dayOfWeek(int day, int month, int year) {
    int d = (day += month < 3 ? year-- : year - 2, 23 * month / 9 + day + 4 + year / 4 - year / 100 + year / 400) % 7;

    switch (d) {
        case 0: printf("Неделя\n"); break;
        case 1: printf("Понеделник\n"); break;
        case 2: printf("Вторник\n"); break;
        case 3: printf("Сряда\n"); break;
        case 4: printf("Четвъртък\n"); break;
        case 5: printf("Петък\n"); break;
        case 6: printf("Събота\n"); break;
    }
}

int main() {
    int day, month, year;
    printf("Въведете ден, месец и година (във формат dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > 29) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
        printf("Невалидна дата!\n");
        return 1;
    }

    dayOfWeek(day, month, year);

    printf("Датите на всички същи дни от седмицата до днешната са:\n");
    for (int i = day; i <= 31; i += 7) {
        if (i <= 28 || (i == 29 && month == 2 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))) || (i <= 30 && (month == 4 || month == 6 || month == 9 || month == 11))) {
            printf("%02d.%02d.%04d\n", i, month, year);
        }
    }

    return 0;
}



    return 0;
}
