#include <stdio.h>

int main()
{
    int x = 10, y = 15, z = 16;

    printf("1. x = %d\n", ++x);

    y = y + (x+1);

    printf("2. x = %d y = %d\n", x, y);

    z = (x--) + (--y);

    printf("3. z = %d\n", z++);

    return 0;
}

