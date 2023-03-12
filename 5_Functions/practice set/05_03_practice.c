#include<stdio.h>
float force(int mass);

int main(){
    int mass;
    printf("Enter the value of mass\n");
    scanf("%d",&mass);

    printf("The value of force of attraction is %f",force(mass));
    return 0;
}

float force(int mass){
    float f;
    f=mass*9.8;
    return f;

}