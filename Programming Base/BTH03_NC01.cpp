//Project: BTH3_NC1.cpp
#include <iostream>
using namespace std;

int main()
{
	char kt;
	cout << "Nhap vao 1 ky tu: ";
	cin >> kt;
	if (kt >= '0' && kt <= '9')
		cout << "Day la ky tu so" << endl;
	else
	{
		if((kt >= 'a' && kt <= 'z') || (kt >= 'A' && kt <= 'Z'))
			cout << "Day la ky tu chu cai" << endl;
		else
			switch(kt)
		{
			case '+': 
				cout << "Day la ky tu phep toan (phep cong)" << endl;
				break;
			case '-': 
				cout << "Day la ky tu phep toan (phep tru)" << endl;
				break;
			case '*': 
				cout << "Day la ky tu phep toan (phep nhan)" << endl;
				break;
			case '/': 
				cout << "Day la ky tu phep toan (phep chia)" << endl;
				break;
			case '%': 
				cout << "Day la ky tu phep toan (phep toan tu)" << endl;
				break;
			case '>': 
				cout << "Day la ky tu phep toan (phep so sanh: lon hon)" << endl;
				break;
			case '<': 
				cout << "Day la ky tu phep toan (phep so sanh: nho hon)" << endl;
				break;
			case '=': 
				cout << "Day la ky tu phep toan (phep so sanh: bang nhau)" << endl;
				break;
			default:
				cout << "Day la ky tu khac" << endl;
		}
	}
	return 0;
}