#include<stdio.h>

int main()
{
    int i,n,a;

    double b=0;

    printf("Enter an integer number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        b=b+log10(i);
        }

    a=b+1;

    printf("\n%d have %d numbers of digits in its factorial.\n\n\n",n,a);

    return 0;
}
