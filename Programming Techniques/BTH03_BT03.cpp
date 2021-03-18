//ProjectL BTH03_BT03.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int *pa, *pb;
	pa = new int;
	pb = new int;
	cout << "Nhap a: "; cin >> *pa;
	cout << "Nhap b: "; cin >> *pb;
	while (*pb != 0)
	{
		int *pd;
		pd = new int;
		*pd = *pa % *pb;
		*pa = *pb;
		*pb = *pd;
		delete pd;
		pd = nullptr;
	}
	cout << "Uoc chung lon nhat cua a & b la: " << *pa << endl;
	delete pa;
	delete pb;
	pa = pb = nullptr;
	return 0;
}