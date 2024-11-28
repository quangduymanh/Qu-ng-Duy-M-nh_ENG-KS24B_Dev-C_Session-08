#include<stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += a[0][i] + a[2][i];
        if (i > 0 && i < 2) sum += a[i][0] + a[i][2];
    }
    printf("Tong duong bien: %d", sum);
    return 0;
}
