#include <stdio.h>

int main()
{
    int input=12345; //因為整數有32767位數
    int i[32767];
    for(int j=0; j<=32767; j++){
        i[j]=input%10;
        input/=10;
    }
    int a=i[0];
    i[0]=i[3];
    i[3]=a;
    for(int j=32767; j>=0; j--){
            printf("%d", i[j]);
    }
    return 0;
}
