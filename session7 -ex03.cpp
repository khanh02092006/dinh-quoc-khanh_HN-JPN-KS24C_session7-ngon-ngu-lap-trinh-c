#include<stdio.h>
int main (){
	
int a[5];
for (int i=0;i<5;i++){
	printf ("nhap so phan thu %d \n",i+1);
	scanf ("%d", &a[i]);
	
}
 for (int i=0 ;i<5;i++){
 	if (a[i] %2==0){
 		printf ( " %d gia tri phan tu la so chan la\n ",a[i]);
	 } else{
	 	printf (" %d gia tri phan tu la so le\n",a[i]);
	 }
 }
 return 0;
}
