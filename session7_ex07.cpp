#include <stdio.h>
int main (){
	
	int n;
	printf (" nhap so phan t cua mang ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf (" phan tu a[%d]",i+1);
		int  phantule;
	while (1){
		scanf ("%d",&phantule);
		if (phantule %2!=0){
			a[i]=phantule;
			break;
			} else {
				printf (" nhap lai so phan tu  a[%d]",i);
				}
				}
				}
				printf (" mang da nhap");
				for (int i= 0; i < n; i++){
					printf ("%d",a[i]);
				}
				 printf ("\n");
				return 0;
				}
	
	
