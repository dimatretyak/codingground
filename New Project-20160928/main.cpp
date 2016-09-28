#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	double a, b, c, d, e, result;
	//puts("\n\t x, y, z = ");		
	//scanf("%lf %lf %lf", &x, &y, &z);
	double x = 3.74*pow(10,-2); //0.0374
	double y = -0.825; //-0.825
	double z = 0.16*pow(10,2); //16
	
	// Вычисления
	a = 1 + pow(sin(x+y), 2);
	b = fabs(x - (2*y/1 + (pow(x,2)*pow(y,2))));
	c = a/b*pow(x,fabs(y));
	d = atan2(1,z);
	e = pow(cos(d), 2);
	//result = c + e;
	//result = (((1 + pow(sin(x+y), 2)) / fabs(x - (2*y/1 + (pow(x,2)*pow(y,2))))) * pow(x,fabs(y))) + (pow(cos(atan2(1,z)), 2));
	
	cout << result << '\n';
	return 0;
}
