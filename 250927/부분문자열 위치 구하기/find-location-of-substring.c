#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], target[1001];
    scanf("%s", str);
    scanf("%s", target);

    int n = strlen(str);
    int m = strlen(target);

    for (int i = 0; i <= n - m; i++) {
        if (strncmp(&str[i], target, m) == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}