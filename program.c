#include<stdio.h>
void main ()
{
	float math,physics,chemistry,cs,english;
	float per,avg;
	float total;

	printf(" Enter the marks of Physics  ");
	scanf("%f", &physics);
	printf(" Enter the marks of Chemistry ");
	scanf("%f", &chemistry);
	printf("Enter the marks of Math ");
	scanf("%f", &math);
	printf("Enter the marks of CS ");
	scanf("%f", &cs);
	printf("Enter the marks of English ");
	scanf("%f", &english);
	total= math+cs+english+physics+chemistry;
	printf("\n The Total Mark is %.2f ",total);
	per = (total/500)*100;
	avg = (total/5);
	printf("\n the percentage mark is : %.2f ", per);
	printf("\n the average mark  is: %.2f", avg);
	return 0;
}
