#include <stdio.h>

int fun(int n){
    if(n==1) return 1;
    if(n==1) return 1;
    return n*fun(n-1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d",fun(n));
    return 0;
}