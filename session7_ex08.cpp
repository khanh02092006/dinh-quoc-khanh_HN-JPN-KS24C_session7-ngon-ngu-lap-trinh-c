#include<stdio.h>
int main (){
	int n;
	printf(" nhap kich thuoc cua mang 2 chieu");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" nhap phan tu [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
			}
			}
			int sum=0;
			for(int i=0;i<n;i++){
				int phantu_cheophu=arr[i][n-1-i];
				printf("%2d",phantu_cheophu);
				sum+=phantu_cheophu;
				}
				printf(" tong cheo phu %d",sum);
				return 0;
				}
			
