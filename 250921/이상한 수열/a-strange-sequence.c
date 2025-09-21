#include <stdio.h>

int fun(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return fun(n/3)+ fun(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d", fun(n));
    
    return 0;
}