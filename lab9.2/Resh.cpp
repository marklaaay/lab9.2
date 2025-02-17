#include "stdafx.h"
#include <cmath>
double Pos(double x, ListBox^ Lb) 
{
	int n = 1;
	double a= x;
	double summ = a;
	while (abs(a) >= 0.00001)
	{
		String^ fs = String::Format("{0,2:D2}{1,25:F9}", n,summ);
		Lb->Items->Add(fs);
		a *= (-(2 * n + 1) * pow(x, 2) / (2 * n + 3)); 
		summ += a;
		n++;
	}
	return 0;
}