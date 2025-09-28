#include <stdio.h>
#include <string.h>

int main() {
    char s[25];   // 최대 길이 20, 넉넉하게 25
    scanf("%s", s);

    int len = strlen(s);

    // 첫 글자를 임시 저장
    char first = s[0];

    // 한 칸씩 앞으로 당기기
    for (int i = 0; i < len - 1; i++) {
        s[i] = s[i + 1];
    }

    // 마지막에 첫 글자 붙이기
    s[len - 1] = first;

    printf("%s\n", s);
    return 0;
}
