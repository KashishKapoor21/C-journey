/* main() is the entry point defined by the C standard where the operating system transfers control to the program. hence every c program needs a main function.
main() is stored in the code segment, and when executed, a stack frame is created for it on the sta
; tells the compiler where a statement ends. Without it, the compiler cannot parse instructions properly.*/
#include <stdio.h>
int main() {
int x = 2, y;
    printf("enter a number: ");
    scanf("%d",&y);    
    printf("Value: %d\n", x);
    printf("You entered: %d\n", y);
    printf("Sum: %d\n", x + y);
    return 0; }
