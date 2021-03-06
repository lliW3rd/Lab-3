// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// William Kirkpatrick
// Lab03

#include "pch.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using namespace std;

short shortSum(short a) {

	short sum = 0;
	for (int i = 1; i <= a; i++)
	{
		
		sum = sum + i;

	}
	return sum;
}

long longSum(long a) {

	long sum = 0;
	for (int i = 1; i <= a; i++)
	{

		sum = sum + i;

	}
	return sum;
}

float fltfactorial(long  n)
{
	float product = 1;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return product;
}

double dblfactorial(long  n)
{
	double product = 1;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return product;
}

double sumRecip(double n)
{
	double sum = 0.0;
	for (double i = 1.0; i <= n; i++)
	{
		sum = sum + (1.0 / i);
	}
	return sum - 1.0;
}


int main()
{
	short n = 0;
	while (n != 9999) {
		cout << "Enter short n" << endl;
		cin >> n;
		cout << "----" << endl;
		if (n != 9999) {
			cout << shortSum(n) << endl;
		}
	}

	long x = 0;
	while (x != 9999) {
		cout << "Enter long n" << endl;
		cin >> x;
		cout << "----" << endl;
		if (x != 9999) {
			cout << longSum(x) << endl;
		}
	}

	long y = 0;
	while (y != 9999) {
		cout << "Enter long n for float factorial" << endl;
		cin >> y;
		cout << "----" << endl;
		if (y != 9999) {
			cout << fltfactorial(y) << endl;
		}
	}

	long z = 0;
	while (z != 9999) {
		cout << "Enter long n for double factorial" << endl;
		cin >> z;
		cout << "----" << endl;
		if (z != 9999) {
			cout << dblfactorial(z) << endl;
		}
	}

	double a = 0.0;
	while (a != 9999) {
		cout << "Enter n for sum recip" << endl;
		cin >> a;
		cout << "----" << endl;
		if (a != 9999) {
			cout << std::setprecision(100) << sumRecip(a) << endl;

		}
	}

	cout << setprecision(100) << (double)4.4 << endl;
	cout << setprecision(100) << (float)4.4 << endl;
	for (double i = 3.4; i < 4.4; i += 0.2) {
		cout << "i = " << setprecision(100) << i << endl;
	}
	


}
