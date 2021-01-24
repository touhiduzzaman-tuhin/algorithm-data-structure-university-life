#include <stdio.h>

int main()
{
    int a = 10, b= 20, c = 30, d = 5, n, t, m, o;

    n = (a <= b) && (b != c) + (a % d);

    t = !(d && (b+c <= a-c));

    m = (a*b) % (b-a);

    o = (a == d) ? b : c;

    printf("%d", o);

    return 0;
}

