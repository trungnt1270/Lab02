#include<stdio.h>
  
int main7(void) 
{
	float r, av, an, bn, ct, st, cv, sv, cn, sn;
	
	printf("Ban kinh hinh tron la : ");
	scanf("%f", &r);
	ct = 2*r*3.14;
	st = r*r*3.14;
	printf("Chu vi hinh tron la : %f\n", ct);
	printf("Dien tich hinh tron la : %f\n", st);
	
	printf("\nDo dai canh hinh vuong la : ");
	scanf("%f", &av);
	cv = 4*av;
	sv = av*av;
	printf("Chu vi hinh vuong la : %f\n", cv);
	printf("Dien tich hinh vuong la : %f\n", sv);
	
	printf("\nChieu dai hinh chu nhat la : ");
	scanf("%f", &an);
	printf("Chieu rong hinh chu nhat la : ");
	scanf("%f", &bn);
	cn = (an+bn)*2;
	sn = an*bn;
	printf("Chu vi hinh vuong la : %f\n", cn);
	printf("Dien tich hinh vuong la : %f\n", sn);
	return 0;				
}
