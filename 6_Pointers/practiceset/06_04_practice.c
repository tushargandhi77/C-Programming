#include<stdio.h>
void sumAndavg(int a,int b,int *sum,float *avg){
     *sum = a + b;
    *avg = *sum/2;
}
int main(){
    int i,j,sum;
    float avg;
    i=3;
    j=6;
    sumAndavg(i, j, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);

}