//Project: BTH06_BT05.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("color 0a");
	char kt;
	ifstream inData;
	ofstream outData;
	inData.open("BT4.txt");
	outData.open("BT6.txt");
	if (inData.is_open() && outData.is_open())
	{
		while (inData >> kt)
		{
			if (kt == 'U' || kt == 'E' || kt == 'O' || kt == 'A' || kt == 'I')
				outData << kt << endl;
		}
		inData.close();
		outData.close();
		cout << "Writing have finished...\n";
	}
	else
		cout << "The opening failed!\n";
	return 0;
}