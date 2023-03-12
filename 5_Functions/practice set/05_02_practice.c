#include<stdio.h>
float temperature(int celsius);

int main(){
    int celsius;
    printf("enter the value of celsius\n");
    scanf("%d",&celsius);

    printf("The value of fehranite is %f",temperature(celsius));
    
    return 0;
}

float temperature(int celsius){
    int fehranite;
    fehranite = (float)(celsius*1.8) + 32;
    return fehranite;

}