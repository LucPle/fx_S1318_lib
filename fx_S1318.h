#define FX_SYSTEM FX_S_13_18
#define __M64 1

#if FX_SYSTEM == FX_S_13_18

typedef int fixed;

// bits number below point
#define FX_Q_NUM 18	
#define FX_Q_HALF 9	
#define FX_Q_VAL 262144
#define FX_Q_FVAL 262144.0f
// Constant Number
#define PI 3.141592653589793238
#define Euler 2.718281828459045235

// Trigonometric Function
extern float sinDeg(float deg);
extern float cosDeg(float deg);
extern float tanDeg(float deg);

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
extern fixed div_float(fixed a, fixed b);
extern fixed div_prev(fixed a, fixed b);
extern fixed div_next(fixed a, fixed b);

#endif

