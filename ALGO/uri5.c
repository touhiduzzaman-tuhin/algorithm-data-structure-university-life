#include <stdio.h>

int main()
{
    int a, b, m, n, p, x, y, z, d, s, h, u;

    printf("Dia ");
    scanf("%d", &a);
    scanf("%d : %d : %d", x, y, z);

    printf("Dia ");
    scanf("%d", &b);
    scanf("%d : %d : %d", m, n, p);

    s = p - z;
    u = n - y;
    h = m - x;
    d = b - a;

    if(s < 0)
    {
        s = s + 60;
        u = u - 1
    }


    return 0;
}
