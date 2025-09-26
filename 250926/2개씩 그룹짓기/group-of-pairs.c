#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[2001];
    for(int i=0; i<2*N; i++) scanf("%d", &arr[i]);

    // 정렬
    qsort(arr, 2*N, sizeof(int), cmp);

    int maxSum = 0;
    for(int i=0; i<N; i++) {
        int sum = arr[i] + arr[2*N-1-i];
        if(sum > maxSum) maxSum = sum;
    }

    printf("%d\n", maxSum);
    return 0;
}
