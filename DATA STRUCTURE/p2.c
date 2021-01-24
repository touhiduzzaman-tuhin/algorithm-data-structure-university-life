#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, l;
    char ch1[100];
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        gets(ch1);

        l = strlen(ch1);
        printf("Case %d: ", i);

        for(j = 0; j < l; j++){
            if(ch1[j] >= 'a' && ch1[j] <= 'z'){
                printf("%c", ch1[j]-32);
            }
            else{
                printf("%c", ch1[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
