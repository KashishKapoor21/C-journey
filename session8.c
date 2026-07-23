#include<stdio.h>
int main(){
    int arr[5] = {10,30,50,70,90};
    int *p = arr;
    for(int i = 0; i < 5; i++){
        printf("%d\n", *p);
        p++;
    }return 0;
}