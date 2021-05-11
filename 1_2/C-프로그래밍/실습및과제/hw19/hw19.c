#include <stdio.h>

double fabs(double y)
{
	if (y < 0)
		return -y;
	else
		return y;
}

double mysqrt(double R)
{
	float x, x0;
	x = R;

	for (;;)
	{
		x0 = x;
		x = (x + R / x) / 2.;
		if (fabs(x0 - x) < 0.000001)
			break;
		else
			continue;
	}
	return x;
}
