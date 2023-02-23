#include "fx_S1318.h"

#define FX_SYSTEM FX_S_13_18
#if FX_SYSTEM == FX_S_13_18

// Tables for Calculation
const float SinTable[91] = {0,0.0175,0.0349,0.0523,0.0698,0.0872,0.1045,0.1219,0.1392,0.1564,
                            0.1737,0.1908,0.2079,0.225,0.2419,0.2588,0.2756,0.2924,0.309,0.3256,
                            0.342,0.3584,0.3746,0.3907,0.4067,0.4226,0.4384,0.454,0.4695,0.4848,
                            0.5,0.515,0.5299,0.5446,0.5592,0.5736,0.5878,0.6018,0.6157,0.6293,
                            0.6428,0.6561,0.6691,0.682,0.6947,0.7071,0.7193,0.7314,0.7431,0.7547,
                            0.766,0.7771,0.788,0.7986,0.809,0.8192,0.829,0.8387,0.848,0.8572,
                            0.866,0.8746,0.8829,0.891,0.8988,0.9063,0.9135,0.9205,0.9272,0.9336,
                            0.9397,0.9455,0.9511,0.9563,0.9613,0.9659,0.9703,0.9744,0.9781,0.9816,
                            0.9848,0.9877,0.9903,0.9925,0.9945,0.9962,0.9976,0.9986,0.9994,0.9998,
                            1};

// conversion function
fixed fromChar(char f) {
	return (fixed) (f * (1 << FX_Q_NUM));
}
fixed fromInt(int f) {	
	return (fixed) (f * (1 << FX_Q_NUM));
}
fixed fromFloat(float f) {
	return (fixed) (f * (1 << FX_Q_NUM));
}
fixed fromDouble(double f) {	
	return (fixed) (f * (1 << FX_Q_NUM));
}


char toChar(fixed x) {
	return (((char) x) / (1 << FX_Q_NUM));
}

int toInt(fixed x) {
	return (((int) x) / (1 << FX_Q_NUM));
}

float toFloat(fixed x) {
	return (((float) x) / (1 << FX_Q_NUM));
}

double toDouble(fixed x) {
	return (((double) x) / (1 << FX_Q_NUM));
}

#endif
