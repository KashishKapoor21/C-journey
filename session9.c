#include <stdio.h>
int sumArray(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + *(arr + i);
    }return sum;
}
int main(){
    int arr[100], size;
    scanf("%d",&size);
    int sum = 0;
    for(int  i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }        printf("SUM = %d\n",sumArray(arr, size));
    return 0;
}