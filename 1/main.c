#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
1
     for(int i = 1; i<=10; i++){
            printf("%d", i);
}



gotovoo
printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");
printf("*****\n");
printf("******\n");
printf("*******\n");
printf("********\n");
printf("*********\n");
printf("***********\n");



4
char symbol;
printf("vavedi simvol za triagalnik:");
scanf("    %c", &symbol);

printf("    %c\n", symbol);
printf("   %c%c%c\n",symbol,symbol,symbol);
printf("  %c%c%c%c%c\n",symbol,symbol,symbol,symbol,symbol);
printf(" %c%c%c%c%c%c%c\n",symbol,symbol,symbol,symbol,symbol,symbol,symbol);
printf("%c%c%c%c%c%c%c%c%c\n",symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol);






5
float inch, cm, mm, dm, m;

    printf("vavedi inchove: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    mm = inch * 25.4;
    dm = inch * 0.254;
    m = inch * 0.0254;


    printf("inchovete v santimetri sa  = %0.2f\n", cm);
    printf("inchovete v milimetri sa  = %0.2f\n", mm);
    printf("inchovete v decimetri sa  = %0.2f\n", dm);
    printf("inchovete v metri sa  = %0.2f\n", m);



6

float celsi;
printf("vavedi gradusi po celsi:");
scanf("%f", &celsi);
printf("%.2f gradusite po celsi sa %.2f gradusa  faranhait ",celsi,(celsi * 9/5)+32);




7

float degrees;
int p =  3.14159265358979323846264338327950288;
printf("vavedi gradusi:");
scanf("%f", &degrees);
printf ("%2f gradusa sa %2f radiani\n", degrees, degrees*(p/180.0));




8

int lev;
float  dolar, paund, euro;

    printf("vavedi velove: ");
    scanf("%d", &lev);
    dolar = lev * 1.8;
    paund = lev * 2.26;
    euro = lev * 1.96;


    printf("levovete v dolari sa:  = %0.2f\n", dolar);
    printf("levovete v paundi sa:  = %0.2f\n", paund);
    printf("levovete v euro sa:  = %0.2f\n", euro);





char symbol;
    int width;

    printf("molq vavedi simvol ");
    scanf(" %c", &symbol);

    printf("Vavedi gilemina na triagalnika  ");
    scanf("%d", &width);
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= width - i; j++)
            printf(" ");
        if (i > 1 && i < width) {
            printf("%c", symbol);
            for (int k = 1; k <= 2 * i - 3; k++)
                printf(" ");
            printf("%c", symbol);
        }
        else {
            for (int k = 1; k <= 2 * i - 1; k++)
                printf("%c", symbol);
        }

        printf("\n");
    }

9


      float a, b, h;

    printf("daljina : ");
    scanf("%f", &a);

    printf("osnova na trapeca: ");
    scanf("%f", &b);

    printf("visocina na trapeca : ");
    scanf("%f", &h);

    printf("liceto na trapeca e : %.2f\n", (a + b) * h / 2);


10





    int angle_degrees;

    printf("vavedi gradusi na ygyl: ");
    scanf("%d", &angle_degrees);

    float angle_radians = angle_degrees * 3.14159 / 180.0;

    float sin_value = angle_radians - (angle_radians*angle_radians*angle_radians) / 6.0 + (angle_radians*angle_radians*angle_radians*angle_radians*angle_radians) / 120.0 - (angle_radians*angle_radians*angle_radians*angle_radians*angle_radians*angle_radians*angle_radians) / 5040.0;
    printf("sinus(%d gradusa) = %.4f\n", angle_degrees, sin_value);

    float cos_value = 1.0 - (angle_radians*angle_radians) / 2.0 + (angle_radians*angle_radians*angle_radians*angle_radians) / 24.0 - (angle_radians*angle_radians*angle_radians*angle_radians*angle_radians*angle_radians) / 720.0;
    printf("kosinos(%d gradusa) = %.4f\n", angle_degrees, cos_value);

    float tan_value = sin_value / cos_value;
    printf("tangens(%d gradusa) = %.4f\n", angle_degrees, tan_value);

    float cotan_value = cos_value / sin_value;
    printf("kotkangens(%d gradusa) = %.4f\n", angle_degrees, cotan_value);
11
*/
 float x1, y1, x2, y2;

    printf("kordinati na tochka A (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("kordinati na tochka B (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float width = (x2 > x1) ? (x2 - x1) : (x1 - x2);
    float height = (y2 > y1) ? (y2 - y1) : (y1 - y2);
    float area = width * height;

    printf("liceto e : %.2f\n", area);




    return 0;
}
