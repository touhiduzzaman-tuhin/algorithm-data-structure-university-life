#include <stdio.h>

int main()
{
    int n, i;

    double a, b, c, avg;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        a = a * 2;
        b = b * 3;
        c = c * 5;

        avg = (a + b + c) / 10;

        printf("%.1lf\n", avg);
    }

    return 0;
}
