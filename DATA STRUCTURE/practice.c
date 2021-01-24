#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];

    int i, count = 0, d = 0, j, o = 0, l= 0, u = 0, lv = 0, uv = 0, s = 0;

    gets(ch);

    //strrev(ch);

    //printf("%s\n", ch);

    //l = strlen(ch);

    for(i = 0; ch[i] != NULL; i++){
        count++;
    }

    printf("%d\n", count);

    for(j = count-1; j >= 0; j--){
        printf("%c", ch[j]);
    }

    printf("\n");

    for(i = 0; ch[i] != NULL; i++){
        if(ch[i] >= '0' && ch[i] <= '9'){
            d++;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            l++;
        }
        else if(ch[i] >= 'A' && ch[i] <= 'Z'){
            u++;
        }
        else if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
            lv++;
        }
        else if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            uv++;

        }
        else if(ch[i] == ' '){
            s++;
        }
        else{
            o++;
        }
    }

    printf("%d\n", d);
    printf("%d\n", l);
    printf("%d\n", u);
    printf("%d\n", lv);
    printf("%d\n", uv);
    printf("%d\n", s);
    printf("%d\n", o);

    return 0;
}
