//Project: BTH3_BT14.cpp
#include <iostream>
using namespace std;
int main()
{
	int v, c, t;
	cout << "Nhap vao so nguyen thu 1: ";
	cin >> v;
	cout << "Nhap vao so nguyen thu 2: ";
	cin >> c;
	cout << "Nhap vao so nguyen thu 3: ";
	cin >> t;
	if ((v >= c) && (v >= t) && (c >= t))
		cout << "Ket qua: " << t << " " << c << " " << v << endl;
	else
		if ((v >= c) && (v >= t) && (t >= c))
			cout << "Ket qua: " << c << " " << t << " " << v << endl;
		else
			if ((c >= v) && (c >= t) && (v >= t))
				cout << "Ket qua: " << t << " " << v << " " << c << endl;
			else
				if ((c >= v) && (c >= t) && (t >= v))
					cout << "Ket qua: " << v << " " << t << " " << c << endl;
				else
					if ((t >= v) && (t >= c) && (v >= c))
						cout << "Ket qua: " << c << " " << v << " " << t << endl;
					else
						if ((t >= v) && (t >= c) && (c >= v))
							cout << "Ket qua: " << v << " " << c << " " << t << endl;
	
	system("pause");
	return 0;
}