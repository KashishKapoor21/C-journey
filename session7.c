#include <stdio.h>
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int x = 20, y = 34;
    swap(&x, &y);
    printf("%d %d", x, y);
}