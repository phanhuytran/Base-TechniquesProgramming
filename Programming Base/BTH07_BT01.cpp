//Project: BTH07_BT01.cpp
#include <iostream>
using namespace std;

bool kTNamNhuan(int n)
{
	if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
		return true;
	return false;
}
int main()
{
	system("color 0a");
	int x;
	cout << "Nhap vao gia tri cua nam: ";
	cin >> x;
	bool kT = kTNamNhuan(x);
	if (x > 0)
		if (kT == true)
			cout << "Nam " << x << " la nam nhuan\n";
		else
			cout << "Nam " << x << " khong phai la nam nhuan\n";
	else
		cout << "Ban da nhap sai gia tri cua nam!\n";
	return 0;
}