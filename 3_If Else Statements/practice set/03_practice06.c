#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Enter num1\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d",&num2);
    printf("Enter num3\n");
    scanf("%d",&num3);
    printf("Enter num4\n");
    scanf("%d",&num4);

    if(num2<num1){
        if(num2<num3){
            if(num2<num4){
                printf("num2 is smaller\n");
            }
        }
    }

                    if(num1<num2){
                        if(num1<num3){
                            if(num1<num4){
                                printf("num1 is smaller\n");
                            }
                        }
                    }
                     if(num3<num1){
                        if(num3<num2){
                            if(num3<num4){
                                printf("num3 is smaller\n");
                            }
                        }
                    }
                     if(num4<num1){
                        if(num4<num2){
                            if(num4<num3){
                                printf("num4 is smaller\n");
                            }
                        }
                    }
    return 0;
}