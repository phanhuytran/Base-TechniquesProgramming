//Project: BTH07_BT08.cpp
#include<iostream>
using namespace std;

void tinhSoFibonacci(int n = 0)
{
	int truoc = 1, sau = 0, tong = 0;
	while (sau < n/2)
	{
		cout << truoc;
		if (sau == n / 2 - 1)
			cout << " ";
		else
			cout << ", ";
		tong = sau + truoc;
		sau = truoc;
		truoc = tong;
	}
}
int main()
{
	system("color 0a");
	int n = 0;
	int truoc = 1, sau = 0, tong = 0;
	cout << "Nhap vao mot so nguyen: ";
	cin >> n;
	tinhSoFibonacci(n);
	cout << endl;
	return 0;
}