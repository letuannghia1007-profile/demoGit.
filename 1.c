#include <stdio.h>
 
 // kieu du lieu "char"
 // kiem tra k� tu l� chu so
 // kiem tra ki tu la chu in hoa  
 // kiem tra ki tu la chu in thuong
 // kiem tra ki tu la chu cai
 // chuyen ki tu tu in hoa sang thuong
 // chuyen ki tu tu in thuong sang hoa
// A-Z: 65-90
// a-z: 97-122
// 0-9: 48-57 
// m� (A-Z; a-z; 0-9) th� khi nhap theo dac ta %d se in ra gia tri so tuong ung
 
 int main () {
 		char kitu; 	
 		scanf("%c", &kitu);
		 printf("gia tri tuong ung cua bang l�: %d\n", kitu); // c� the thay tu 65-90 = A-Z hoac cac ma aschi khac nhung nho cho vao nhay don  
		  
		 if (kitu>=65 && kitu <= 90)
		 	printf("La chu in hoa");
		else if (kitu >= 'a' && kitu <= 'z')
			printf("la chu thuong");
		else 
			printf("con lai"); 
 
	 	
 }
 
 
 dang thu github://
 oyeah duoc roi nay
  
  
 
 
		 
  
