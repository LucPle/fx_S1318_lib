#define FX_SYSTEM   FX_U_24_08
#define __M64	1

#if FX_SYSTEM == FX_U_24_08
#define FX_Q_NUM    8		// bits number below point

typedef unsigned int fixed;

extern fixed fromFloat(float f);
extern float toFloat(fixed x);

#endif

