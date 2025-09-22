#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char words[101][101];       // 원래 단어들 저장
char candidates[101][101];  // 조건 만족 단어들 저장
int candidate_count = 0;

// 비교 함수 (사전순 정렬용)
int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int N, K;
    char T[101];
    scanf("%d %d %s", &N, &K, T);

    for(int i = 0; i < N; i++) {
        scanf("%s", words[i]);
        // prefix 확인: 앞부분이 T와 같으면 후보에 넣기
        if(strncmp(words[i], T, strlen(T)) == 0) {
            strcpy(candidates[candidate_count++], words[i]);
        }
    }

    // 후보 단어들을 사전순 정렬
    qsort(candidates, candidate_count, sizeof(candidates[0]), cmp);

    // K번째 단어 출력 (1-based index)
    printf("%s\n", candidates[K-1]);

    return 0;
}