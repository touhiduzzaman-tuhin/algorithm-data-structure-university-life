#include<stdio.h>

int main(){
    int n,a,i,b;
    int c[50];
    printf("How many coins?: ");
    scanf("%d",&b);
    printf("Enter the set of coins: ");
    for(i=0;i<b;i++){
        scanf("%d",&c[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&n);
    count(c,b,n);
}
void count(int c[], int b, int n){
    int a,j,count=0;
    for(j=0;j<b;j++){
        a=n/c[j];
        n=n%c[j];
        count=a+count;
        printf("%d coin : %d\n",c[j],a);
    }
    printf("Total Coins: %d\n",count);
}
