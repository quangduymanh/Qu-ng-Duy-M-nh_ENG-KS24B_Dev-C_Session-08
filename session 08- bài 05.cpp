#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	for(int j=0;j<3;j++){
		sum+=a[0][j];
	}
	printf("tong cua hang tren la %d",sum);
	return 0;
}
