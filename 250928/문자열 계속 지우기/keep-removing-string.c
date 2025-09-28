#include <stdio.h>
#include <string.h>

int main() {
    char A[10005], B[105];
    scanf("%s", A);
    scanf("%s", B);

    int lenB = strlen(B);

    while (1) {
        char *pos = strstr(A, B); // A에서 B 위치 찾기
        if (pos == NULL) break;

        int idx = pos - A; // B 시작 위치
        memmove(A + idx, A + idx + lenB, strlen(A) - idx - lenB + 1);
    }

    printf("%s\n", A);
    return 0;
}
