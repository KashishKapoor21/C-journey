#include<stdio.h> 
int main(){ 
    int a,b;
    char op;    
    printf("Simple Calculator Starting...\nLoading modules.................\nREADY.\n"); 
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&op);
    printf("You entered: %d and %d\n", a, b);
   if(op == '+'){
    printf("SUM: %d", a + b);
   }
   else if(op == '-'){
    printf("DIFFERENCE: %d", a - b);
   }
   else if(op == '*'){
    printf("PRODUCT %d", a * b);
   }
   else if(op == '/'){
    if(b != 0){printf("QUOTIENT: %d", a / b);
    }
    else{
        printf("Error: Division by zero is not allowed.");
    }
   }
    else{
     printf("Invalid operator entered.");
    }
    return 0;
}