#include <stdio.h>

void fun(int n){
    printf("%d ",n);
    if(n>1)
        fun(n-1);
    printf("%d ",n);
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    fun(n);
    return 0;
}