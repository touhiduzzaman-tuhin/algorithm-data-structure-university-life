#include <stdio.h>

int main()
{
    char str[500000];
    int i, count = 0;

    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        count++;
    }

    printf("%d",count);

}
