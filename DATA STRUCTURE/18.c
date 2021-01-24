#include<stdio.h>

int main()
{
    int i, a, b = 1;

    printf("Enter a integer: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        b=b*i;
    }

    printf("\nFactorial of %d is: %d\n\n",a,b);

    return 0;
}
