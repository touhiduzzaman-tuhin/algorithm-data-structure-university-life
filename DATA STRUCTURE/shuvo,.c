#include <stdio.h>

int main()
{
    int i, n, a, t, array[100];

    printf("Enter array size: \n");

    scanf("%d", &n);

    printf("Insert your array elements: \n");

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("your array elements are: \n");

    for(i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    printf("Enter the location where you want insert the element: \n");

    scanf("%d", &a);

    printf("Enter your element: \n");

    scanf("%d", &t);

    printf("your current array is: \n");

    for(i = n; i >= a; i--){
        array[i] = array[i-1];
    }
    n++;
    array[a-1] = t;

    for(i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}
