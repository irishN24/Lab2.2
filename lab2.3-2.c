#include <stdio.h>
#include <math.h>

int main()
{
    double Y, a, b, h, x;
    printf("Input a, b, h:\n");
    int rez = scanf("%lf%lf%lf", &a, &b, &h);

    if (rez == 3)
    {
        if (a == b) {
            Y = cos(a);
            printf("x: %lf,Y: %lf\n", a, Y);
        }
        if (a < b) {
            if ((h <= b - a) && (h != 0)) {
                for (x = a; ((x >= a) && (x <= b)); x += h) {
                    Y = cos(x);
                    printf("x: %lf,Y: %lf\n", x, Y);
                }
            }
            else{
                Y = cos(a);
                printf("x: %lf,Y: %lf\n", a, Y);
            }
        }
        if (a > b) {
            if ((h <= a - b) && (h != 0)) {
                for (x = a; ((x <= a) && (x >= b)); x += h) {
                    Y = cos(x);
                    printf("x: %lf,Y: %lf\n", x, Y);
                }
            }
            else {
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
