#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int fun(char text[], char pattern[]){
    int len = strlen(text);
    int len2 = strlen(pattern);

    for(int i=0; i<=len-len2; i++){
        int j;
        for(j=0; j<len2; j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j==len2){
            return i;
        }
    }
    return -1;
}


int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    
    // Please write your code here.
    printf("%d", fun(text, pattern));
    
    return 0;
}