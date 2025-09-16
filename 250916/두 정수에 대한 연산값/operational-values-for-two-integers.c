#include <stdio.h>

void fun(int *a, int *b){
    if(*a>*b){
        *a += 25;
        *b *= 2;
    }
    else{
        *b += 25;
        *a *= 2;
    }
    
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    // Please write your code here.
    fun(&a,&b);
    printf("%d %d", a, b);
    return 0;
}