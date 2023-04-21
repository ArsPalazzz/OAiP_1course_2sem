#include <iostream>
#include <math.h>

double dihotomia(double a, double b, double e, double dih, double x) {
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (dih <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	return x;
}

void nomerfun(const char* text, double(*fun)(double,double,double, double, double), double a, double b, double c, double dih, double x) {
	printf("%s\n", text);
	printf("%f\n",dihotomia(a, b, c, dih, x));
}

void main() {
	double a = 4.0, b = 10.0;
	double e = 0.001;
	double x = 0;
	nomerfun("Function1", dihotomia, a, b, e, sin(x) + pow(x, 3), x);
	nomerfun("Function2", dihotomia, a, b, e, 0.4 + pow(x, 3), x);
}