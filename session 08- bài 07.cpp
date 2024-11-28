#include<stdio.h>
int main(){
	int n=4;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{20,30,40,50},{60,70,80,90}};
	int sum= 0;
	printf("cac phan tu duong cheo la: \n");
	for(int i=0;i<n;i++){
		printf("%d",a[i][i]);
		sum +=a[i][i];
	}
	printf("\n tong so phan tu duong cheo la: %d \n",sum);
	
	return 0;
}
