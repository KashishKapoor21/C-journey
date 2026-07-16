#include <stdio.h>
int main(){
    int n1, n2;
    char op;
    printf("SIMPLE CALCULATOR\n");
    while(1){
        printf("Enter operation to perform(+, -, *, /)");
        scanf(" %c",&op);
        if(op == 'q' || op == 'Q'){
            break; 
        }
        printf("Enter two numbers: \n");
        scanf("%d %d",&n1,&n2);
        if(op == '+'){
            printf("SUM = %d\n", n1 + n2);
        }
        else if(op == '-'){
            printf("DIFFERENCE = %d\n", n1 - n2);
        }
        else if(op == '*'){
            printf("PRODUCT = %d\n", n1 * n2);
        }
        else if(op == '/'){
            if(n2 != 0){
            printf("QUOTIENT = %d\n", n1 / n2);
            }
            else{
                printf("Division by zero not possible\n");
            }
        }
        else{
            printf("Invalid operation\n");
        }
        printf("Press 'q' to quit or any other key to continue\n");
}
return 0;
}