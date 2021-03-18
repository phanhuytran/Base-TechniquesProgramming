//Project: BTH3_NC8.cpp
#include <iostream>
using namespace std;

int main()
{
	int d, m, y, A, du, m1, m2, y1;
	cout << "Nhap ngay, thang, nam: ";
	cin >> d >> m >> y;
	if (m == 1 || m == 2)
	{
		y1 = y - 1;
		if (m == 1)
			m1 = 13;
		else
			m2 = 14;
	}
	else
	{
		y1 = y;
		m1 = m;
	}
	A = d + 2 * m1 + (3 * (m1 + 1) / 5) + y1 + (y1 / 4) - (y1 / 100) + (y1 / 400) + 2;
	du = A % 7;
	switch(du)
	{
	case 0:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay bay" << endl;
		break;
	case 1:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay chu nhat" << endl;
		break;
	case 2:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu hai" << endl;
		break;
	case 3:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu ba" << endl;
		break;
	case 4:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu tu" << endl;
		break;
	case 5:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu nam" << endl;
		break;
	case 6:
		cout << "Ngay " << d << " thang " << m << " nam " << y << " la ngay thu sau" << endl;
		break;
	}
	return 0;
}