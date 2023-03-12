#include<stdio.h>
#include<math.h>

int main(){
    int a=8;
    int b=4 ;
    printf("The value of a+b is : %d\n",a+b);
    printf("The value of a-b is : %d\n",a-b);
    printf("The value of a*b is : %d\n",a*b);
    printf("The value of a/b is : %d\n",a/b);

    printf("5 when divided by 2 leaves a remender of %d\n",5%2);
    printf("-5 when divided by 2 leaves a remender of %d\n",-5%2);
    printf("5 when divided by -2 leaves a remender of %d\n",5%-2);


    printf("The value of 2 to the power 5  is : %f\n",pow(2,5));

    printf("The value of 6+5 is %d\n",6+5);
    printf("The value of 6+5.6 is %f\n",6+5.6);
    printf("The value of 6.7+5.7 is %f\n",6.7+5.7);

    return 0;
}