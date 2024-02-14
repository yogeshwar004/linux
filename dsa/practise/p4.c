//return type,no arguments
#include<stdio.h>
int areaofsquare()
{
	float s=25,area;
	area=s*s;
	return area;
}
void main()
{
	float a;
	a=areaofsquare();
	printf("\nArea of Square=%f\n",a);
}
