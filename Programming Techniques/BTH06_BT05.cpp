//Project: BTH06_BT05.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	int count = 0;
	char kt;
	ifstream inData;
	inData.open("BT4.txt");
	if (inData.is_open())
	{
		while (inData >> kt)
		{
			count++;
			inData.ignore();
		}
		inData.close();
		cout << "This File has " << count << " characters\n";
	}
	else
		cout << "The opening failed!\n";
	return 0;
}