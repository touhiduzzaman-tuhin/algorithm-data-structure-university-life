#include <stdio.h>

int main()
{
    double n, a, b, c, d, m, x, t, k;

    scanf("%lf %lf %lf", &a, &b, &c);


    if(a < (b + c) && b < (a + c) && c < (a + b))
    {
        m = a + b + c;

        printf("Perimetro = %.1lf\n", m);
    }

    else
    {
        k = (c * (a + b)) / 2;

        printf("Area = %.1lf\n", k);
    }


    return 0;
}
