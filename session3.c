#include <stdio.h>
int main() {
    int a;
    float b;
    char ch;
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &ch);
    printf("a = %d, b = %f, ch = %c\n", a, b, ch);
}