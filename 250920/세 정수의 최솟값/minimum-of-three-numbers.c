#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 먼저 a와 b 중 작은 값 찾기
    int min_ab = (a < b) ? a : b;

    // 그 값과 c 중 작은 값 찾기
    int min_val = (min_ab < c) ? min_ab : c;

    printf("%d\n", min_val);
    return 0;
}