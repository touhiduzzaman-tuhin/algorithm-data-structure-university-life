#include<stdio.h>
int main()
{

    char str[50], temp;
    int i, j, count = 0;

    printf("Enter your string\n");

    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        count++;
    }

    for(i=0, j=count-1; i <= (count-1)/2; i++, j--)
    {

        temp=str[i];
        str[i]=str[j];
        str[j]=temp;

    }
    printf("%s", str);
}
