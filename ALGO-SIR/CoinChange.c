#include<stdio.h>

int main(){
    int n,i,j,a,b,count=0;;
    int c[50];
    printf("How many coins?: ");
    scanf("%d",&b);
    printf("Enter the set of coins: ");
    for(i=0;i<b;i++){
        scanf("%d",&c[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&n);
    for(j=0;j<b;j++){
        a=n/c[j];
        n=n%c[j];
        count=a+count;
    }
    printf("Total coins: %d\n",count);
}
