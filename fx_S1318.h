#define FX_S_13_18 -1318
#define FX_SYSTEM FX_S_13_18
#define __M64 1
#define __M32 0

#if FX_SYSTEM == FX_S_13_18

typedef int fixed;

// bits number below point
#define FX_Q_NUM 18	
#define FX_Q_HALF 9	
#define FX_Q_VAL 262144
#define FX_Q_FVAL 262144.0f

// Number
#define PI 3.141592
#define Euler 2.718281
#define log2 0.693147
#define ln10 2.302585
#define sqrt2 1.414214
#define sqrt3 1.732051

// Macro
#define _fromFloat(f) (fixed) ((f) * (1 << FX_Q_NUM))
#define _toFloat(x) (((float) (x)) / (1 << FX_Q_NUM))
#define _add(a, b) ((a) + (b))
#define _sub(a, b) ((a) - (b))
#define _mul(a, b) ((a) * (b))

// Conversion Function
extern fixed fromChar(char f);
extern fixed fromInt(int f);
extern fixed fromFloat(float f);
extern fixed fromDouble(double f);

extern char toChar(fixed x);
extern int toInt(fixed x);
extern float toFloat(fixed x);
extern double toDouble(fixed x);

// Calculating Functions
extern fixed add(fixed a, fixed b);
extern fixed sub(fixed a, fixed b);

extern fixed mul_float(fixed a, fixed b);
extern fixed mul_bal(fixed a, fixed b);
extern fixed mul_fast(fixed a, fixed b);
extern fixed mul_long(fixed a, fixed b);

extern fixed div_float(fixed a, fixed b);
extern fixed div_prev(fixed a, fixed b);
extern fixed div_next(fixed a, fixed b);
extern fixed div_long(fixed a, fixed b);

// Trigonometric Function
extern float sinDeg(fixed deg);
extern float cosDeg(fixed deg);
extern float tanDeg(fixed deg);

// Sine Function Table
extern float sinTable[91];

#endif
