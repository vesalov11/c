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


int main() {
    double x1, y1, x2, y2, x, y;
    printf("daide 6 stoinoti");

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    scanf("%lf", &x);
    scanf("%lf", &y);

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside\n");
    } else {
        printf("Outside\n");
    }

7
int main() {
    int distance;
    char period;
    double taxi_cost, bus_cost, train_cost;

    printf("vavedete km do destinaciqta ");
    scanf("%d", &distance);
    printf("chast ot denq (za den-D ili nosht-N): ");
    scanf(" %c", &period);


    taxi_cost = 0.70 + (period == 'D' ? 0.79 : 0.90) * distance;
    bus_cost = distance >= 20 ? 0.09 * distance : -1;
    train_cost = distance >= 100 ? 0.06 * distance : -1;

    if (taxi_cost <= bus_cost && taxi_cost <= train_cost)
        printf("nai evtinoto s taksi e  . cena: %.2f lv.\n", taxi_cost);
    else if (bus_cost != -1 && bus_cost <= train_cost)
        printf("nai evtinoto patuvane a svtobus e  cena: %.2f lv.\n", bus_cost);
    else if (train_cost != -1)
        printf("nai evtinoto patuvane s vlak e . cena: %.2f lv.\n", train_cost);


8

int main() {
    double a, b, c;
    printf("vavedi parvata traba litri na chas: ");
    scanf("%lf", &a);
    printf("vavedi vtorata traba litri na chas : ");
    scanf("%lf", &b);
    printf("kolko chasa trabite palnqt ");
    scanf("%lf", &c);

    printf("v momenta baseina e palen %.2f s litri voda.\n", (a + b) * c);

9

int main() {
    printf("vavedete ploshta na lozeto  ");

    double area, yield_per_sqm, desired_wine;
    scanf("%lf %lf %lf", &area, &yield_per_sqm, &desired_wine);

    double wine_produced = area * yield_per_sqm * 0.16;
    printf("obshtoto vino: %.2f vitri\n", wine_produced);

    if (wine_produced >= desired_wine) {
        printf("kolichestvoto e dostatachno \n");
        double remaining_wine = wine_produced - desired_wine;
        if (remaining_wine > 0) {
            printf("ostanaloto vino she bade razdadeno\n");
            int num_workers;
            scanf("%d", &num_workers);
            printf("vseki rabotnik she vzeme %.2f llitra vino.\n", remaining_wine / num_workers);
        }
    } else {
        printf("vinoto ne e dostatachno.\n");
    }
10

int main() {
    int n, number, count[5] = {0};

    printf("obsht broi celi cisla ");
    scanf("%d", &n);

    printf("vavedi celi cisla ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &number);
        ++count[number / 200];
    }

    double total = (double)n;
    for (int i = 0; i < 5; ++i) {
        printf("%.2f%%\n", (count[i] / total) * 100);
    }

11
*/
int main() {
    int n;
    printf("Enter the size of the fortress: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i == 1 || i == n)
            printf("/^%.*s^\\%c\n", n - 2, i == 1 ? "/" : "\\", i == 1 ? '\\' : '/');
        else if (i == n / 2 + 1)
            printf("|%*s|%*s|\n", n * 2 - 2, "", n * 2 - 2, "");
        else
            printf("|%*s|%*s|\n", n * 2 - 2, "", n * 2 - 2, "");
    }


    return 0;

}




