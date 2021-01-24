#include<stdio.h>
void quicksort(int n[25],int a,int b){
   int i,j,p,temp;

   if(a<b){
      p=a;
      i=a;
      j=b;

      while(i<j){
         while(n[i]<=n[p]&&i<b)
            i++;
         while(n[j]>n[p])
            j--;
         if(i<j){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }
      temp=n[p];
      n[p]=n[j];
      n[j]=temp;
      quicksort(n,a,j-1);
      quicksort(n,j+1,b);
   }
}
int main(){
   int i, count, n[25];
   printf("Total elements: ");
   scanf("%d",&count);
   printf("Enter elements: ");
   for(i=0;i<count;i++)
      scanf("%d",&n[i]);
   quicksort(n,0,count-1);
   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",n[i]);
   return 0;
}
