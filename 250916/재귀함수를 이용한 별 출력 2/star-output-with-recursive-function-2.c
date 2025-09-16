#include <stdio.h>

void printStar(int n){
    for(int i=0; i<n; i++){
        printf("* ");
    }
    printf("\n");
}

void star(int n){
    if(n==0) return;
    printStar(n);
    star(n-1);
    printStar(n);
}
int main() {
    int n;
    scanf("%d", &n);

    // Please write your code here.
    star(n);
    return 0;
}