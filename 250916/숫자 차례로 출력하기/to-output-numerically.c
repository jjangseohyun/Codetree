#include <stdio.h>

void fun(int n){
    if(n==0)
        return;
    printf("%d ", n);
    fun(n-1);
}
void fun2(int n){
    if(n==0) 
        return;
    fun2(n-1);
    printf("%d ", n);
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    fun2(n);
    printf("\n");
    fun(n);
    return 0;
}