#include <stdio.h>

void swap(int *a, int *b){  // truyen dia chi 
	int tam=*a;
	*a=*b;
	*b=tam;
	 
} 
void Tang(int x[], int n){
	int i,j; 
	for(i=0;i<n-1;i++){
		int min=i;
		for (j=i+1;j<n;j++){
			if(x[j]<x[min])
				min=j; 
		} 
		swap(&x[i], &x[min]); // do o tren nhan dia chi nen o ham swap nay phai truyen dia chi nen dung "& " 
	}	
} 

void printfMang(int x[], int n){  // neu khong muon dung ham nay thi co the viet vong lap o duoi nhu binh thuong. 
	int i; 
	for (i=0;i<n;i++)
		printf("%d ", x[i]); 
} 
int main(){
	int n,i; 
	int a[100];
	printf("\nNhap vao so phan tu mang: ");
	do{
		scanf("%d", &n); 
	} while (n<1||n>100);
	
	for (i=0;i<n;i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]); 
	} 
	printf("\nCac phan tu cua mang: ");
	for(i=0;i<n;i++){
		printf("%d ", a[i]); 
	} 
	
	printf("\nMang tang dan: ");
	Tang(a,n); 
	printfMang(a,n); 
} 
