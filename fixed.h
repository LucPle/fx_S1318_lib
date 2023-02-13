#define FX_SYSTEM   FX_S_13_18
#define __M64	1

#if FX_SYSTEM == FX_S_13_18
#define FX_Q_NUM    18		// bits number below point

typedef unsigned int fixed;

extern fixed fromFloat(float f);
extern float toFloat(fixed x);

#endif

