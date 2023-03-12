#include<stdio.h>
int multi(int *a);

int main(){
    int i = 10;
      multi(&i);
      printf("The i X 10 is %d\n",i);
    return 0;
}
int multi(int *a){
    int temp;
    temp = *a;
    *a = temp*10;
}