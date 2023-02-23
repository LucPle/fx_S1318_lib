#include "fixed.h"

#if FX_SYSTEM == FX_U_24_08
int global_A = 9999;

fixed fromFloat(float f)
{
	return (fixed) (f * (1<< FX_Q_NUM));
}

float toFloat(fixed x)
{
	return (float) x / 256.0f;
}

#endif

