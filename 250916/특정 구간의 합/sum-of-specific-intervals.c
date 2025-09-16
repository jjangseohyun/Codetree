#include <stdio.h>

int arr[101];
int queryA1[101];
int queryA2[101];

void fun(int arr[], int m, int queryA1[], int queryA2[]){
    for(int i=0; i<m; i++){
        int sum = 0;
        int x = queryA1[i];
        int y = queryA2[i];
        for(int j=x; j<=y; j++){
            sum += arr[j];
        }
        printf("%d \n", sum);
    }
}



int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA1[i], &queryA2[i]);
    }
    fun(arr, m,queryA1, queryA2);
    // Please write your code here.
    return 0;
}