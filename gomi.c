#include <stdio.h>
 

float tbc(int x[], int n){  // day la xu li nhieu gia tri mot luc nen can khai bao mang  
	int tong,i; 
	tong = 0;
	for (i=0;i<n;i++){
		tong+=x[i]; 
	} 
	return (float) tong/n; 
} 

int main(){
	int a[100];
	int n,i; 

	do{
		printf("Nhap vao so phan tu:  ");
		scanf("%d", &n); 
	} while(n<1||n>100);
	
	for(i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d", &a[i]); 
	}
	printf("\nPhan tu cua mang: ");
	for (i=0;i<n;i++){
		printf("%d ", a[i]); 
	} 

	printf("\nTrung binh cong cua mang la: %.2f", tbc(a,n)); 
}
