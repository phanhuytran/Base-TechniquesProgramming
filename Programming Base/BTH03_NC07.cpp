//Project: BTH3_NC7.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	int v, c, t;
	int max;
	cout << "Nhap mot so nguyen co ba chu so: ";
	cin >> n;
	v = n % 10;
	c = n / 10 % 10;
	t = n / 10 / 10;
	if(v > c && v > t)
	{
		max = v;
		cout << "Chu so lon nhat nam o hang don vi" << endl;
	}
	else
		if(c > v && c > t)
		{
			max = c;
			cout << "Chu so lon nhat nam o hang chuc" << endl;
		}
		else
			if(t > c && t > v)
			{
				max = t;
				cout << "Chu so lon nhat nam o hang tram" << endl;
			}
			else
				if(t == v && c == t)
				{
					max = t;
					cout << "Chu so lon nhat nam o hang don vi, hang chuc va hang tram" << endl;
				}
				else
					if(t == v && t > c)
					{
						max = v;
						cout << "Chu so lon nhat nam o hang don vi va hang tram" << endl;
					}
					else
						if(t == c && t > v)
						{
							max = c;
							cout << "Chu so lon nhat nam o hang chuc va hang tram" << endl;
						}
						else
							if(v == c && v > t)
								cout << "Chu so lon nhat nam o hang don vi va hang chuc" << endl;
	return 0;
}