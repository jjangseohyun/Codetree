#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idx;   // 점 번호 (1번부터 시작)
    int x, y;  // 좌표
    int dist;  // 원점에서 거리
} Point;

// 정렬 기준: 거리 우선, 같으면 번호(idx) 오름차순
int cmp(const void *a, const void *b) {
    Point *pa = (Point*)a;
    Point *pb = (Point*)b;

    if (pa->dist == pb->dist)
        return pa->idx - pb->idx; // 번호 작은 것 우선
    return pa->dist - pb->dist;   // 거리 작은 것 우선
}

int main() {
    int N;
    scanf("%d", &N);

    Point arr[1001];

    for (int i = 0; i < N; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        arr[i].idx = i + 1;   // 번호는 입력 순서
        arr[i].x = x;
        arr[i].y = y;
        arr[i].dist = abs(x) + abs(y);  // 맨해튼 거리
    }

    // 정렬
    qsort(arr, N, sizeof(Point), cmp);

    // 출력
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i].idx);
    }

    return 0;
}
