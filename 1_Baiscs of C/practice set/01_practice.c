#include<stdio.h>

int main(){
    int length,breadth,area;
    printf("Enter the value of length\n");
    scanf("%d",&length);
    printf("Enter the value of breadth\n");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of rectangle is 4%d",area);
    return 0;
}