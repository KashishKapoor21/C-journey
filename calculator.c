#include <stdio.h>
int add(int n1, int n2){
    return n1+n2;
}
int subtract(int n1, int n2){
    return n1-n2;
}
int multiply(int n1, int n2){
    return n1*n2;
}
int divide(int n1, int n2){
    return n1/n2;
}
int main(){
    int n1,n2;
    char op;
    while(1){
        printf("Enter operation (+, -, *, /): ");
        scanf(" %c",&op);
        if(op == 'q'){
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d %d",&n1,&n2);
        if(op == '+'){
            printf("SUM = %d\n", add(n1,n2));
        }
        else if(op == '-'){
            printf("DIFFERENCE = %d\n", subtract(n1,n2));
        }
        else if(op == '*'){
            printf("PRODUCT = %d\n", multiply(n1,n2));
        }
        else if(op == '/'){
            if(n2 == 0){
                printf("Error: Division by zero not possible\n");
            } else {
            printf("QUOTIENT = %d\n", divide(n1,n2));
        }
    }else{
        printf("INVALID OPERATION\n");
    }printf("Press 'q' to quit or any other key to continue\n");
    }return 0;
}