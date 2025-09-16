#include <stdio.h>

int arr[101];

int fun(int n, int m, int arr[]){
    int cnt = 0;
    while(m>0){
        cnt += arr[m];
        if(m==1){
            break;
        }
        if(m%2==0){
            m = m/2;
        }
        else
            m -= 1;
    }
    return cnt;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    // Please write your code here.

    int ans = fun(n, m, arr);
    printf("%d", ans);
    return 0;
}