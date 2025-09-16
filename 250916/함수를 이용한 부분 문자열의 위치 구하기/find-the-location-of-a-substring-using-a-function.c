#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int fun(char text[], char pattern[]){
    int len = strlen(text);
    int len2 = strlen(pattern);

    for(int i = 0; i <= len - len2; i++){  // <= 로 수정
        int j;
        for(j = 0; j < len2; j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j == len2){
            return i;  // 부분 문자열 시작 인덱스 반환
        }
    }
    return -1;  // 없으면 -1
}

int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    
    printf("%d", fun(text, pattern));
    
    return 0;
}