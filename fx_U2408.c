#include "fixed.h"

#if FX_SYSTEM == FX_U_24_08
int global_A = 9999;

fixed fromFloat(float f)
{
	int ret;
	static int a = 9999;
	int b = 100;
	a++;
	b++;
	ret = (fixed) (f * (1<< FX_Q_NUM));
	return ret;
}

float toFloat(fixed x)
{
	return (float) x / 256.0f;
}

#endif

