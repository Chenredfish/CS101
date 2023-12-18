#include <stdio.h>

int main()
{
    for(int i1=1, i2=1; i2<10; i1++){
        printf("%d*%d=%d ", i1, i2, i1*i2);
        if(i1>=9){
            i1=0;
            i2+=1;
            printf("\n");
        }
    }
    return 0;
}
