#include <stdio.h>

// 최대공약수 (재귀)
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

// 최소공배수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// n개의 수 최소공배수 (재귀)
int lcm_array(int arr[], int n) {
    if(n == 1) return arr[0];        // 마지막 원소
    int prev = lcm_array(arr, n - 1); // 앞쪽 n-1개 최소공배수
    return lcm(prev, arr[n - 1]);     // 마지막 원소와 합침
}

int main() {
    int n;
    int arr[11];
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("%d\n", lcm_array(arr, n));
    return 0;
}