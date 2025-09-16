#include <stdio.h>

int fun(int n){
    if(n==0) return 0;
    int a = n%10;
    return a*a + fun(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    printf("%d", fun(n));
    return 0;
}''