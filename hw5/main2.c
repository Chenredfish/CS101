/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input=10000;
    float pi=400000.0f;
    int i2=1;
    for(float i1=1; i1<input; i1++){

        if(i2%2){
            pi-=(400000/((2*i2)+1));  
        }
        else{
            pi+=(400000/(2*i2+1));
        }
        i2++;
    }
    printf("%.5f", pi/100000);
    return 0;
}
