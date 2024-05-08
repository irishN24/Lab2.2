#include <stdio.h>
#include <math.h>
int main()
{
    double Y, a, b, h, x;
    printf("Input a, b, h:\n");
    int rez = scanf_s("%lf%lf%lf", &a, &b, &h);

    if (rez == 3)
    {
        if (a == b) {
            Y = cos(a);
            printf("x: %lf,Y: %lf\n", a, Y);
        }
        if (a < b) {
            if (h >= a && h <= b) {
                for (x = a; ((x >= a) && (x < b)); x += h) {
                    Y = cos(x);
                    printf("x: %lf,Y: %lf\n", x, Y);
                }
            }
            if ((h < a) || (h > b)) {
                Y = cos(a);
                printf("x: %lf,Y: %lf\n", a, Y);
            }
        }
        if (a > b) {
            if (h <= a && h >= b) {
                for (x = a; ((x <= a) && (x > b)); x += h) {
                    Y = cos(x);
                    printf("x: %lf,Y: %lf\n", x, Y);
                }
            }
            if ((h > a) || (h < b)) {
                Y = cos(a);
                printf("x: %lf,Y: %lf\n", a, Y);
            }
        }

    }
    else
    {
        printf("Wrong Data");
    }
    return 0;
}
