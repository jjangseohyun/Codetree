#include <stdio.h>

int sum = 0;

int Sum(int n){
    if(n==1) return 0;
    if(n%2==0){
        n=n/2;
        sum += 1;
    }
    else {
        n = n/3 ;
        sum += 1;
    }
    Sum(n);
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    
    printf("%d", Sum(n));
    return 0;
}