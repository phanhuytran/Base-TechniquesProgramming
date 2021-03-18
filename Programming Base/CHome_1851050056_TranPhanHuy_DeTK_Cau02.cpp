//CHome_1851050056_TranPhanHuy_DeTK_Cau02.cpp
#include <iostream>
using namespace std;

int main()
{
	system("color 0a");
	int n, max = INT_MIN, demSL = 0;
	cout << "Nhap vao day so nguyen ket thuc bang Ctrl + Z: ";
	while (cin >> n)
	{
		if (max < n)
			max = n;
		if (n % 2 != 0)
			demSL += 1;
	}
	if (demSL >= 1)
		cout << "Trong day vua nhap co " << demSL << " so le" << endl;
	else
		cout << "Trong day vua nhap khong co so le" << endl;
	cout << "Gia tri lon nhat trong day vua nhap la " << max << endl;
	return 0;
}