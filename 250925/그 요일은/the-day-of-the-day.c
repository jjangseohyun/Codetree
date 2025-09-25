#include <stdio.h>
#include <string.h>

// 2024년 각 달의 날짜 수
int days_in_month[13] = {0, 
    31, 29, 31, 30, 31, 30, 
    31, 31, 30, 31, 30, 31};

char *week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    int m1, d1, m2, d2;
    char target[4];
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", target);

    // 요일 인덱스: 시작일은 무조건 월요일
    int day_index = 0; // Mon
    int count = 0;

    // (m1, d1)부터 (m2, d2)까지 하루씩 이동
    int cm = m1, cd = d1;
    while (cm < m2 || (cm == m2 && cd <= d2)) {
        if (strcmp(week[day_index], target) == 0) {
            count++;
        }

        // 다음 날로 이동
        cd++;
        if (cd > days_in_month[cm]) {
            cm++;
            cd = 1;
        }
        day_index = (day_index + 1) % 7;
    }

    printf("%d\n", count);
    return 0;
}