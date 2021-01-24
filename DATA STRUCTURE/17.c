#include<stdio.h>
#include<math.h>


int main()
{
    int i,n,a;

    printf("Enter an integer: ");

    scanf("%d",&n);
    a=sqrt(n);

    for(i=2;i<=a;i++){
        if(n%i==0)
        {
        printf("\n%d is not a prime number.\n\n\n",n);
        break;
        }
    }
    if(i==a+1)
    {
    printf("\n%d is a prime number.\n\n\n",n);
    }

    return 0;
}
