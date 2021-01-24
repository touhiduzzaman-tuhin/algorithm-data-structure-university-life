#include <stdio.h>

int main()
{
    char *array[6] = {"Dhaka",
                      "Rangpur",
                      "Sylhet",
                      "Barisal",
                      "Khulna",
                      "Chittagong"
                      };

    int i;

    for(i = 0; i < 6; i++){
        printf("City name[#%d]  is %s\n", i+1, array[i]);
    }

    return 0;
}
