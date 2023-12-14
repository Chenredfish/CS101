#include <stdio.h>
int main(){
  int i=1;
  if(i & (i-1)){
    printf("True");
  }
  else{
    printf("False");
  }
  return 0;
}
