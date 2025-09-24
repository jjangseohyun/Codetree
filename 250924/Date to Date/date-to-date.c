#include <stdio.h>

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// (월, 일)을 2011년 기준 연중 몇 번째 날로 변환
int toDayOfYear(int m, int d) {
    int sum = 0;
    for (int i = 1; i < m; i++) {
        sum += days[i];
    }
    return sum + d;
}

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);

    int day1 = toDayOfYear(m1, d1);
    int day2 = toDayOfYear(m2, d2);

    printf("%d\n", day2 - day1 + 1);

    return 0;
}
