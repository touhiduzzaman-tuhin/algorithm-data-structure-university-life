#include <stdio.h>

 int main(){
    int array[10];
    int i,n,a;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nEnter the search element\n");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a==array[i]){
            break;
        }
    }
    for(i=0;i<n;i++){
       if(a==array[i])
           printf("Found at position");
           printf("%d",i+1);
    }
}
