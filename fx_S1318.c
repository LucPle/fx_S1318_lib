#include "fixed.h"

#if FX_SYSTEM == FX_S_13_18

fixed fromFloat(float f)
{
	int ret, sign = 0;
	if (f < 0) {
		sign = 1;
		f = -f;
	}
	ret = (fixed) (f * (1 << FX_Q_NUM));
	return sign == 0 ? ret : ret + (1 << 31);
}

float toFloat(fixed x)
{
	if ((int)x >= 0) {
		return (float) x / (1 << FX_Q_NUM);
	}
	else {
		return -(float)(x - (1 << 31)) / (1 << FX_Q_NUM);
	}
}

#endif

