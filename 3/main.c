#include <stdio.h>
/*

int main() {
    int number, biggest = 0, smallest = 0;

    printf("Въведете множество числа (за край въведете 0):\n");

    scanf("%d", &number);

    biggest = number;
    smallest = number;

    do {
        if (number > biggest)
            biggest = number;
        if (number < smallest && number != 0)
            smallest = number;

        scanf("%d", &number);
    } while (number != 0);

    printf("Най-големото число е   %d\n", biggest);
    printf("най- малкото число е  %d\n", smallest);

2
    int main() {
    int hours, minutes;

    printf("въведи време, час и минути  ");
    scanf("%d%d", &hours, &minutes);
    minutes += 15;
    hours += minutes / 60;
    minutes %= 60;
    hours %= 24;

    printf("времето след 15 мин е %02d:%02d\n", hours, minutes

3

int main() {
    int num1, num2, num3;
    printf("моля въведи 3 числа ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("%s\n", num1 == num2 && num2 == num3 ? "yes" : "no");
4



int main() {
    int points, bonus = 0;
    printf("моля въведете число "),
    scanf("%d", &points);

    bonus = (points <= 100) ? 5 : (points <= 1000) ? points * 0.2 : points * 0.1;
    bonus += (points % 2 == 0) + (points % 10 == 5) + 2;

    printf("числото след бунуса е %d\n", points + bonus);

5

int main() {
    int time1, time2, time3;
    printf("моля въведете времена");
    scanf("%d%d%d", &time1, &time2, &time3);

    int total_seconds = time1 + time2 + time3;
    printf("времето е %d:%02d\n", total_seconds / 60, total_seconds % 60);

6
*/


#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x, y;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    scanf("%lf", &x);
    scanf("%lf", &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside\n");
    }


    return 0;

}



