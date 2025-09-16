#include <stdio.h>

int sum=0; 

void Sum(int n){
    if(n==0) return;
    sum += n;
    Sum(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    Sum(n);
    printf("%d", sum);
    return 0;
}