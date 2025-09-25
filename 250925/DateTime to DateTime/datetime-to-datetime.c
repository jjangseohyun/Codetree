#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // 기준 시각: 11일 11시 11분
    int base = (11 * 24 * 60) + (11 * 60) + 11;

    // 목표 시각: A일 B시 C분
    int target = (A * 24 * 60) + (B * 60) + C;

    int diff = target - base;

    if (diff < 0) printf("-1");
    else printf("%d", diff);

    return 0;
}