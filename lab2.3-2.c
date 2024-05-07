#include <stdio.h>
#include <math.h>
int main()
{
    double Y, a, b, h, y;
    printf("Input a, b, h:\n");
    int rez = scanf_s("%lf%lf%lf", &a, &b, &h);
    double x;

    if (rez == 3)
    {
        if (a == b) {
            printf("A = B!!!");
        }
        if (a < b) {
            if (h >= a && h <= b) {
                for (x = a; x < b; x += h) {
                    Y = cos(x);
                    printf("x: %lf,Y: %lf\n", x, Y);
                }
            }
            else {
                printf("Function values not found!");
            }
        }
        
        //printf("x: %lf,Y: %lf\n", x, Y);
    }
    else
    {
        printf("Wrong Data");
    }
    return 0;
}
