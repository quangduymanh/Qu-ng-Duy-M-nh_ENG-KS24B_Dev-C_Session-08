#include <stdio.h>
int main(){
    int n;
    printf("Nhap so nguyen : ");
    scanf("%d",&n);
    int numbers[n][n];
    printf("Nhap so cho ma tran %dx%d:\n", n, n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d",&numbers[i][j]);
        }
    }
    printf("Ma tran da nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}
