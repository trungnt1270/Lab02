#include <stdio.h>
#include <stdlib.h>

int main6(void)
{
	float toan, li, hoa, tong, tb;
	
	printf("Diem mon toan la\n");
	scanf("%f", &toan );
	
	printf("Diem mon li la\n");
	scanf("%f", &li );
	
	printf("Diem mon hoa la\n");
	scanf("%f", &hoa );
	
	tong = toan + li + hoa;
	tb = tong / 3;
	printf("Tong diem 3 mon la %f\n", tong);
	printf("Trung binh 3 mon la %f\n", tb);
	return 0;
}
