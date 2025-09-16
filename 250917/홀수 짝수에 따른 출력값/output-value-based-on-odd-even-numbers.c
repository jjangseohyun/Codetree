#include <stdio.h>

int fun(int n){
    if(n==2) return 2;
    if(n==1) return 1;
       
    return n + fun(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d", fun(n));
    
    return 0;
}