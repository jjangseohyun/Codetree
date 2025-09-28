#include <stdio.h>
#include <string.h>

#define MAX 1005

// 문자열 뒤집기 함수
void reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

int main() {
    char s[MAX];
    int Q;

    scanf("%s %d", s, &Q);

    for (int i = 0; i < Q; i++) {
        int t;
        scanf("%d", &t);

        int len = strlen(s);

        if (t == 1) { 
            // 맨 앞을 맨 뒤로
            char first = s[0];
            for (int j = 0; j < len - 1; j++) {
                s[j] = s[j + 1];
            }
            s[len - 1] = first;
        } 
        else if (t == 2) { 
            // 맨 뒤를 맨 앞으로
            char last = s[len - 1];
            for (int j = len - 1; j > 0; j--) {
                s[j] = s[j - 1];
            }
            s[0] = last;
        } 
        else if (t == 3) { 
            // 뒤집기
            reverse(s);
        }

        // 현재 문자열 출력
        printf("%s\n", s);
    }

    return 0;
}
