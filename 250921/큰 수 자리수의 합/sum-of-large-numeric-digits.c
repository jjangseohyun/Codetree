#include <stdio.h>

int a, b, c;

int fun(int n){
    if(n==0) return 0;
    return (n%10)+fun(n/10);
}
int main() {
    scanf("%d %d %d", &a, &b, &c);
    // Please write your code here.
    int sum = a*b*c;
    printf("%d",fun(sum));
    return 0;
}