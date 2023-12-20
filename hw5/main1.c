#include <stdio.h>

int main()
{
    int input=7;
    for(int i1=1; i1<=input; i1++){
        printf("%*d ", input-i1+1, i1);
        for(int i2=1; i2<i1; i2++){
            printf("%d ", i1);
        }
        printf("\n");
    }

    return 0;
}
