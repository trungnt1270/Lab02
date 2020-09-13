#include<stdio.h>
  
int main8(void) 
{
	int i, f, d, c;
	printf("/*===Kich thuoc cua cac kieu du lieu===*/\n");
	
	printf("Kieu int : %d Byte\n", sizeof(int));
	printf("So nguyen: ");
	scanf("%d", &i);
	
	printf("\nKieu float : %d Byte\n", sizeof(float));
	printf("So thuc kieu float: ");
	scanf("%f", &f);
	
	printf("\nKieu double : %d Byte\n", sizeof(double));
	printf("So thuc kieu double: ");
	scanf("%f", &d);
	
	printf("\nKieu char: %d Byte\n", sizeof(char));
	printf("Ky tu : ");
	scanf("%c", &c);
	
	printf("\nKieu long int : %d Byte\n", sizeof(long int));
	printf("\nKieu long double : %d Byte\n", sizeof(long double));
	
	printf("/*=====================================*/\n");
	printf("\nBam mot phim bat ki de dong chuong trinh!");
	getch();
}
