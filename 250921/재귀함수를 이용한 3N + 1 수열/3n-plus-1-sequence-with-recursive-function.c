#include <stdio.h>

int sum =0;

int fun(int n){
    if(n==1) return sum;
    if(n%2==0){
        sum += 1;
        return fun(n/2);
    }
    else if(n%2==1){
        sum+=1;
        return fun(n*3+1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.

    printf("%d", fun(n));
    
    return 0;
}