#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, i = 0, b = 0;
    char a[20];
    while ((c = getchar()) != '\n') {
        a[i] = c;
        i++;
    }
    a[i + 1] = '\n';
    for (i = 0; a[i] != '\n'; i++) {
        b++;
    }
    b--;
    if ((a[0] == '(' || (a[0] > 47 && a[0] < 58)) && !(a[b] > 39 && a[b] < 48)) {
        for (i = 1; i < b-1; i++) {
            if ((((a[i - 1] > 41 && a[i - 1] < 48)) != (a[i] > 41 && a[i] < 48)) ||
                ((((a[i - 1] > 47 && a[i - 1] < 58)) && (a[i] > 47 && a[i] < 58))) || (a[i - 1] == '(')||(((a[i - 1] > 47 && a[i - 1] < 58)) && (a[i] > 40 && a[i] < 48)));
            else {
                printf("yanlış sözdizimi");
                exit(0);
            }
        }
    } else
        printf("yanlış sözdizimi");
    if (!(a[b-1] > 39 && a[b-1] < 48)) {
        printf("doğru sözdizimi");
    } else if ((a[i] > 39 && a[i] < 48)) {
        printf("yanlış sözdizimi");
    }
    return 0;
}
