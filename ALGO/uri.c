#include <stdio.h>

int main()
{
    //int a;

    double x, y, z, a, pi, b, c, d, m, n;

    //scanf("%d", &a);
    scanf("%lf %lf %lf", &x, &y, &z);

    pi = 3.14159;
    //y = (15/100);
    //x = 4 / 3.0;;
//y = x * pi *  a* a * a;

    a = (x * z) / 2;
    b = pi * z * z;
    m = x + y;
    n = (m * z) / 2;
    d = y * y;
    c = x * y;

   // p = x + y;

    //printf("%s", ch);
    printf("TRIANGULO: %.3lf\n", a);
    printf("CIRCULO: %.3lf\n", b);
    printf("TRAPEZIO: %.3lf\n", n);
    printf("QUADRADO: %.3lf\n", d);
    printf("RETANGULO: %.3lf\n", c);

    return 0;
}
