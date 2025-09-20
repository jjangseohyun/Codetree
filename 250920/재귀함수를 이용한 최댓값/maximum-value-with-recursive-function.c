#include <stdio.h>

int arr[101];

int findMax(int n) {
    if (n == 1) return arr[1];  // 기저 사례: 원소가 1개일 때
    int prevMax = findMax(n - 1);
    return (arr[n] > prevMax) ? arr[n] : prevMax;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findMax(n));
    return 0;
}