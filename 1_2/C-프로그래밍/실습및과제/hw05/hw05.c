#include <stdio.h>

int main()

{

	double areal, aimg, breal, bimg;
	char c;

	scanf("%lf %lf %c %lf %lf", &areal, &aimg, &c, &breal, &bimg);

	if ('+' == c)
	{
		printf("%.1lf + %.1lfi\n", areal + breal, aimg + bimg);
	}

}
