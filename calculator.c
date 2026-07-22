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
                return 0;
            } else {
            return a / b;
         }
    }else{
        printf("INVALID OPERATION\n");
    } }
int main(){
    int n1,n2;
    char op;
    int h[5];
    int count = 0;
    while(1){
        printf("Enter operation (+, -, *, /): ");
         printf("Press 'q' to quit or any other key to continue\n and 'h' for history ");
        scanf(" %c",&op);
        if(op == 'q'){
            break;
        }
        if(op == 'h'){
            if(count == 0){
                printf("no history available.\n");
            }else{
                printf("Last %d results: \n", count);
                for(int i = 0; i < count; i++){
                    printf("%d\n", h[i]);
                }
            }continue;
        }
        printf("Enter two numbers: ");
        scanf("%d %d",&n1,&n2);
        int result = calculate(op, n1, n2);
        printf("RESULT = %d\n", result);
        if(count < 5){
            h[count] = result;
            count++;
        }else{
            for(int i = 0; i < 4; i++){
                h[i] = h[i + 1];
            }h[4] = result;
        }

    }
    return 0;
}