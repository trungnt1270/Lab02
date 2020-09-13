#include <stdio.h>
#include <conio.h>
main5()
{
	float top, bottom, height;
	float s;
	printf("Nhap vao day nho\n");
	scanf("%f", &top);
	
	printf("Nhap vao day lon\n");
	scanf("%f", &bottom);
	
	printf("Nhap vao chieu cao\n");
	scanf("%f", &height);
	
	s = (top + bottom) * height /2;
	printf("Dien tich hinh thang la %f\n", s);
	getch;
}
