#include<stdio.h>
void printarray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("The valie of element %d is %d\n",i+1,*(ptr+i));
    }
    
}
// void printarray(int ptr[],int n){
//     for(int i=0;i<n;i++){
//         printf("The value of element %d is %d\n",i+1,ptr[i]);
//     }
    
// }

int main(){
    int arr[]={1,2,343,44,34,43,44};
    printarray(arr,7);
    return 0;
}