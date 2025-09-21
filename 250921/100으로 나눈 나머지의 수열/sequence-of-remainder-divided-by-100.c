#include <stdio.h>

int fun(int n){
    if(n==1) return 2;
    if(n==2) return 4;

    return (fun(n-1) * fun(n-2)) % 100;
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    printf("%d", fun(n));
    
    return 0;
}