#include "fx_S1318.h"

#define FX_SYSTEM FX_S_13_18
#if FX_SYSTEM == FX_S_13_18

// Tables for Calculation
float sinTable[91] = {
	0,4574.4128,9148.8256,13720.61696,18287.16544,22848.47104,27401.91232,31947.48928,36482.58048,41007.18592,
	45521.3056,50019.69664,54502.35904,58969.2928,63417.87648,67848.11008,72257.37216,76643.04128,81007.73888,85346.22208,
	89658.49088,93944.54528,98201.76384,102427.5251,106624.4506,110787.2973,114916.0653,119010.7546,123068.7437,127090.0326,
	131072,135014.6458,138915.3485,142774.1082,146588.3034,150360.5555,154085.6218,157763.5021,161391.575,164972.4621,
	168503.5418,171982.1926,175408.4147,178782.208,182100.951,185364.6438,188570.665,191719.0144,194809.6922,197842.6982,
	200812.7898,203725.2096,206572.0934,209358.6842,212079.7389,214735.2576,217327.8618,219852.3085,222311.2192,224701.9725,
	227024.5683,229276.3853,231460.0448,233572.9254,235612.4058,237583.7286,239481.6512,241303.552,243054.6739,244732.3955,
	246334.0954,247862.3949,249314.6726,250688.3072,251988.5414,253212.7539,254358.3232,255425.2493,256416.1536,257328.4147,
	258162.0326,258917.0074,259593.3389,260191.0272,260707.4509,261145.2314,261504.3686,261784.8627,261984.0922,262104.6784,
	262144
};

// Conversion Functions
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

// Calculating Functions
fixed add(fixed a, fixed b) {
	return (a + b);
}

fixed sub(fixed a, fixed b) {
	return (a - b);
}

fixed mul_float(fixed a, fixed b) {
	return (fixed) ((float) a * (float) b / FX_Q_FVAL);
}

fixed mul_bal(fixed a, fixed b) {
	return ((a >> FX_Q_HALF) * (b >> FX_Q_HALF));
}

fixed mul_fast(fixed a, fixed b) {
	return ((a * b) >> FX_Q_NUM);
}

fixed mul_long(fixed a, fixed b) {
	return (fixed) (((long long) a * (long long) b) >> FX_Q_NUM);
}

fixed div_float(fixed a, fixed b) {
	return b != 0 ? (fixed) (FX_Q_FVAL * (float) a / (float) b) : 0;
}

fixed div_prev(fixed a, fixed b) {
	return b != 0 ? ((a << FX_Q_NUM) / b) : 0;
}

fixed div_next(fixed a, fixed b) {
	return b != 0 ? ((a / b) << FX_Q_NUM) : 0;
}

fixed div_long(fixed a, fixed b) {
	return b != 0 ? (fixed) (((long long) a << FX_Q_NUM) / (long long) b) : 0;
}

// Trigonometric Function
float sinDeg(fixed deg) {
	if (0 <= deg && deg <= 90)
		return toFloat((fixed)sinTable[deg]);
	else if (90 < deg && deg <= 180)
		return toFloat(sinTable[180 - deg]);
	else if (180 < deg && deg <= 270)
		return (-1) * toFloat(sinTable[deg - 180]);
	else
		return (-1) * toFloat(sinTable[360 - deg]);
}

float cosDeg(fixed deg) {
	if (0 <= deg && deg <= 270)
		return sinDeg(deg + 90);
	else
		return sinDeg(deg - 270);
}

float tanDeg(fixed deg) {
		return sinDeg(deg) / cosDeg(deg);
}

#endif
