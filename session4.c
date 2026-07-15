#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age >= 18){
        printf("ADULT\n");
    }else{
        printf("MINOR\n");
    }
    if(age % 2 == 0){
        printf("positive\n");
    }else{
        printf("negative\n");   
    }    return 0;
}