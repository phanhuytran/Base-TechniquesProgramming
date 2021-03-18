//Project: BTH3_BT06.cpp
#include <iostream>
using namespace std;

int main()
{
 
	int year;
	cout << "Nhap vao 1 nam: ";
	cin >> year;
	if( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		cout << "Nam " << year << " la nam nhuan" << endl;
	else 
		cout << "Nam " << year << " khong phai la nam nhuan" << endl;
	
	system("pause");
	return 0;
}