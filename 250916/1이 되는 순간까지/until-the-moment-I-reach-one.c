#include <stdio.h>

int Sum(int n){
    if(n==1) return 0;
    if(n%2==0){
        return 1+Sum(n/2);
    }
    else
        return 1+Sum(n/3);
    
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    
    printf("%d", Sum(n));
    return 0;
}