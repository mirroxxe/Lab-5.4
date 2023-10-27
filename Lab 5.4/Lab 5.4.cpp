// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double P0()
{
	double p = 1;
	for (int j = 1; j <= 15; j++)
		p *= sqrt((j * j) / (1. + exp(-j)));
	return p;
}
double P1(const int j)
{
	if (j > 15)
		return 1;
	else
		return sqrt((j * j) / (1 + exp(-j))) * P1(j + 1);
}
double P2(const int j)
{
	if (j < 1)
		return 1;
	else
		return sqrt((j * j) / (1 + exp(-j))) * P2(j - 1);
}
double P3(const int j, double t)
{
	t = t * sqrt((j * j) / (1 + exp(-j)));
	if (j >= 15)
		return t;
	else
		return P3(j + 1, t);
}
double P4(const int j, double t)
{
	t = t * sqrt((j * j) / (1 + exp(-j)));
	if (j <= 1)
		return t;
	else
		return P4(j - 1, t);
}
int main()
{
	cout << "(iter) P0 = " << P0() << endl;
	cout << "(rec up ++) P1 = " << P1(1) << endl;
	cout << "(rec up --) P2 = " << P2(15) << endl;
	cout << "(rec down ++) P3 = " << P3(1, 1) << endl;
	cout << "(rec down --) P4 = " << P4(15, 1) << endl;
	return 0;
}