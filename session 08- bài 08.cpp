#include<stdio.h>
int main(){
	int n=4;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int sum= 0;
	printf("cac phan tu duong cheo phu la: \n");
	for(int i=0;i<n;i++){
		printf("%d",a[i][n-i-1]);
		sum +=a[i][n-i-1];
	}
	printf("\n tong so phan tu duong cheo phu la: %d \n",sum);
	
	return 0;
}
