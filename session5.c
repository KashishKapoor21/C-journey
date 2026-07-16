#include <stdio.h>
int  main(){
    int i = 1, n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d\n", i);
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}