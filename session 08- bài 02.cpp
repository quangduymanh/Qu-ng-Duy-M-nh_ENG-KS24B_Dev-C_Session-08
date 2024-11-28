#include<stdio.h>
int main(){
	int a=5;
	int b[5]={1,2,3,4,5};
	int x;
	printf("moi ban nhap so ban can kiem tra:");
	scanf("%d",&x);
	for(int i=0;i<a;i++){
		if(b[i]==x){
			printf("vi tri phan tu trong mang : %d",i);
			return 0;
		}
		}
	printf("phan tu khong ton tai trong mang");
	
	return 0;
}
