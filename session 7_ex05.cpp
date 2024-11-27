#include <stdio.h>
int main (){
	int n=5;
	int a[5]={ 1,6,9,65,90};
	int max =a[0];
	int min =a[0];

	for (int i=1;i<5;i++){
		if (a[i] > max){
			max=a[i];
			}
	    if (a[i]<min){
	    	min=a[i];
		}
		}
		printf (" phan tu lon nhat %d\n",max);
		printf (" phan tu nho nhat %d\n",min);
		return 0;
		}
	
