//CHome_1851050056_TranPhanHuy_DeTK_Cau03.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n, a = 0;
	cout << "Nhap vao mot so nguyen: ";
	cin >> n;
	while (n <= 0 || n % 4 != 0)
	{
		cout << "Ban da nhap sai! Vui long nhap lai: ";
		cin >> n;
	}
	cout << endl;
	while (n > a)
	{
		cout << "\t" << ++a << "\t";
		if (a % 4 == 0)
			cout << endl << endl;
	}
	cout << endl;
	return 0;
}