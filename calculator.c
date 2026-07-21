#include <stdio.h>
int calculate(char op, int a, int b){
 if(op == '+'){ 
    return a + b;
        }
        else if(op == '-'){
            return a - b;
         }
        else if(op == '*'){
            return a * b;
          }
        else if(op == '/'){
            if(b == 0){
                printf("Error: Division by zero not possible\n");
            } else {
            return a / b;
         }
    }else{
        printf("INVALID OPERATION\n");
    }printf("Press 'q' to quit or any other key to continue\n");
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
        int result = calculate(op, n1, n2);
        printf("RESULT = %d\n", result);
    }
    return 0;
}