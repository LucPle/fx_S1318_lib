#define FX_SYSTEM   FX_S_13_18
#define __M64 1

#if FX_SYSTEM == FX_S_13_18

typedef unsigned int fixed;

// bits number below point
#define FX_Q_NUM 18		
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
extern float toFloat(fixed x);
extern float toFloat(fixed x);
extern float toFloat(fixed x);



#endif

