#include<stdio.h> 
int main(){ 
    int a;
    printf("Simple Calculator Starting...\nLoading modules..................\nREADY.\n"); 
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("You entered: %d and %d\n", a, b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if(b != 0) {
        printf("Quotient: %d\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0; }