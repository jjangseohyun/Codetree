#include <stdio.h>
#include <stdlib.h>

// qsort에서 사용할 비교 함수
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int A[101], B[101];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    // 두 배열을 정렬
    qsort(A, n, sizeof(int), cmp);
    qsort(B, n, sizeof(int), cmp);

    // 비교
    int same = 1;
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            same = 0;
            break;
        }
    }

    if(same) printf("Yes\n");
    else printf("No\n");

    return 0;
}
