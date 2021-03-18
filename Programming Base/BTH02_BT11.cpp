//Project: BTH02_Bai11.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double pi = 3.1415926535897;
	double x;
	double radians;
	double sinx;
	double cosx;
	double tanx;

	cout << "Nhap vao goc x: ";
	cin >> x;
	radians = x * pi / 180;
	sinx = sin(radians);
	cosx = cos(radians);
	tanx = tan(radians);
	cout << "sin(" << x << ") = " << sinx << endl;
	cout << "cos(" << x << ") = " << cosx << endl;
	cout << "tan(" << x << ") = " << tanx << endl;

	system("pause");
	return 0;
}