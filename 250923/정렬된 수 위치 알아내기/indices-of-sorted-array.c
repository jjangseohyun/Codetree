#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;  // 원소 값
    int idx;    // 원래 인덱스
} Element;

// 비교 함수 (값 기준으로 정렬)
int cmp(const void *a, const void *b) {
    Element *ea = (Element *)a;
    Element *eb = (Element *)b;
    if(ea->value == eb->value) 
        return ea->idx - eb->idx; // 값 같으면 원래 인덱스 순
    return ea->value - eb->value;
}

int main() {
    int N;
    scanf("%d", &N);
    Element arr[1001];
    int pos[1001]; // 결과 저장: 원래 인덱스 → 새 인덱스

    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i].value);
        arr[i].idx = i; // 원래 인덱스 저장
    }

    // 값 기준 정렬æ
    qsort(arr, N, sizeof(Element), cmp);

    // 정렬된 위치 기록
    for(int i=0; i<N; i++) {
        pos[arr[i].idx] = i+1; // 문제에서 위치를 1-based로 출력
    }

    // 출력
    for(int i=0; i<N; i++) {
        printf("%d ", pos[i]);
    }

    return 0;
}