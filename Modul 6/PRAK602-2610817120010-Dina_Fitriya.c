#include <stdio.h>

int main() {
    int n;
    int zetsu[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++) {
        int label = i + 1;
        if (i > 0) printf(" ");
        printf("%d", zetsu[i] * label);
    }
    printf("\n");

    return 0;
}