#include <stdio.h>
int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}int main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("%d is the larger number\n", max(n1,n2));
    return 0;
}