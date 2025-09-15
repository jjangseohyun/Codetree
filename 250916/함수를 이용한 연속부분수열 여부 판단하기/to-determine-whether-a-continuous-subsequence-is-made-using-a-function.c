#include <stdio.h>

#define MAX 100

int A[MAX], B[MAX];

int isSubsequence(int n1, int n2) {
    // i: 시작 위치 (0 ~ n1-n2)
    for(int i=0; i<=n1-n2; i++){
        int ok = 1;  // 부분 수열인지 확인하는 플래그
        for(int j=0; j<n2; j++){
            if(A[i+j] != B[j]){
                ok = 0;
                break;
            }
        }
        if(ok) return 1; // 하나라도 찾으면 바로 성공
    }
    return 0;
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for(int i=0; i<n1; i++)
        scanf("%d", &A[i]);
    for(int i=0; i<n2; i++)
        scanf("%d", &B[i]);

    if(isSubsequence(n1, n2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
