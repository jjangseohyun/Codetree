#include <stdio.h>

int fib(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    return fib(n-1) +fib(n-2);     
}
int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d ", fib(n));
    
    return 0;
}