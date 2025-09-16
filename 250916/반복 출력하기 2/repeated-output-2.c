#include <stdio.h>

void fun(int n){
    if(n==0)
        return ;
    printf("HelloWorld\n");
    fun(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // Please write your code here.
    fun(n);
    
    return 0;
}